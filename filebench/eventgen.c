/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 2007 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#pragma ident	"@(#)eventgen.c	1.1	07/10/03 SMI"

/*
 * The event generator in this module is the producer half of a
 * metering system which blocks flows using consumer routines in the
 * flowop_library.c module. Four routines in that module can limit rates
 * by event rate (flowoplib_eventlimit), by I/O operations rate
 * (flowoplib_iopslimit()), by operations rate (flowoplib_opslimit),
 * or by I/O bandwidth limit (flowoplib_bwlimit). By setting appropriate
 * event generation rates, required calls per second, I/O ops per second,
 * file system ops per second, or I/O bandwidth per second limits can
 * be set. Note, the generated events are shared with all consumer
 * flowops, of which their will be one for each process / thread
 * instance which has a consumer flowop defined in it.
 */

#include <sys/time.h>
#include "vars.h"
#include "eventgen.h"
#include "filebench.h"
#include "flowop.h"
#include "ipc.h"

/*
 * Prints "how to use" information for the eventgen module
 */
void
eventgen_usage(void)
{
	(void) fprintf(stderr, "eventgen rate=<rate>\n");
	(void) fprintf(stderr, "\n");
}

/*
 * The producer side of the event system.
 * Once eventgen_hz has been set by eventgen_setrate(),
 * the routine sends eventgen_hz events per second until
 * the program terminates. Events are posted by incrementing
 * filebench_shm->eventgen_q by the number of generated
 * events then signalling the condition variable
 * filebench_shm->eventgen_cv to indicate to event consumers
 * that more events are available.
 *
 * Eventgen_thread attempts to sleep for 10 event periods,
 * then, once awakened, determines how many periods actually
 * passed since sleeping, and issues a set of events equal
 * to the number of periods that it slept, thus keeping the
 * average rate at the requested rate.
 */
static void
eventgen_thread(void)
{
	hrtime_t last;

	last = gethrtime();

	/* CONSTCOND */
	while (1) {
		struct timespec sleeptime;
		hrtime_t delta;
		int count;

		if (filebench_shm->eventgen_hz == 0) {
			(void) sleep(1);
			continue;
		}
		/* Sleep for 10xperiod */
		sleeptime.tv_sec = 0;
		sleeptime.tv_nsec = 1000000000UL / filebench_shm->eventgen_hz;
		sleeptime.tv_nsec *= 10;
		if (sleeptime.tv_nsec < 1000UL)
			sleeptime.tv_nsec = 1000UL;
		sleeptime.tv_sec = sleeptime.tv_nsec / 1000000000UL;
		if (sleeptime.tv_sec > 0)
			sleeptime.tv_nsec -= (sleeptime.tv_sec * 1000000000UL);
		(void) nanosleep(&sleeptime, NULL);
		delta = gethrtime() - last;
		last = gethrtime();
		count = (filebench_shm->eventgen_hz * delta) / 1000000000;

		filebench_log(LOG_DEBUG_SCRIPT,
		    "delta %lldms count %d", delta / 1000000, count);

		/* Send 'count' events */
		(void) ipc_mutex_lock(&filebench_shm->eventgen_lock);
		/* Keep the producer with a max of 5 second depth */
		if (filebench_shm->eventgen_q <
		    (5 * filebench_shm->eventgen_hz))
			filebench_shm->eventgen_q += count;

		(void) pthread_cond_signal(&filebench_shm->eventgen_cv);

		(void) ipc_mutex_unlock(&filebench_shm->eventgen_lock);
	}
}

/*
 * Creates a thread to run the event generator eventgen_thread
 * routine. Shuts down filebench if the eventgen thread cannot
 * be created.
 */
void
eventgen_init(void)
{
	/*
	 * Linux does not like it if the first
	 * argument to pthread_create is null. It actually
	 * segv's. -neel
	 */
	pthread_t tid;

	if (pthread_create(&tid, NULL,
	    (void *(*)(void*))eventgen_thread, 0) != 0) {
		filebench_log(LOG_ERROR, "create timer thread failed: %s",
		    strerror(errno));
		filebench_shutdown(1);
	}
}

/*
 * Puts the current event rate in the integer portion of the
 * supplied var_t. Returns a pointer to the var_t.
 */
var_t *
eventgen_ratevar(var_t *var)
{
	var->var_integer = filebench_shm->eventgen_hz;
	return (var);
}

/*
 * Sets the event generator rate to that supplied by
 * vinteger_t rate.
 */
void
eventgen_setrate(vinteger_t rate)
{
	filebench_shm->eventgen_hz = rate;
}

/*
 * Turns off the event generator by setting the rate to zero
 */
void
eventgen_reset(void)
{
	filebench_shm->eventgen_q = 0;
}

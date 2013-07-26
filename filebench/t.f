#
# Copyright 2005 Sun Microsystems, Inc.  All rights reserved.
#
# The contents of this file are subject to the terms of the
# Common Development and Distribution License.
# See the file LICENSING in this distribution for details.
#
#

set $dir="raw:/dev/sdc"
set $logdir="raw:/dev/sdb"
set $nshadows=1
set $iosize=8k
set $cached=0
set $memperthread=1m

define fileset name=datafiles,path=$dir,filesizegamma=0,dirwidth=1024,prealloc=100,cached=$cached,reuse
define fileset name=logfiles,path=$logdir,filesizegamma=0,dirwidth=1024,prealloc=100,cached=$cached,reuse

define process name=reader,instances=$nshadows
{
  thread name=shadow,memsize=$memperthread,useism
  {
    flowop read name=shadowread,filesetname=datafiles,
      iosize=$iosize,random,opennext,directio=$directio
  }
}



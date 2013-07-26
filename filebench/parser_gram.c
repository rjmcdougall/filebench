/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FSC_LIST = 258,
     FSC_DEFINE = 259,
     FSC_EXEC = 260,
     FSC_QUIT = 261,
     FSC_DEBUG = 262,
     FSC_CREATE = 263,
     FSC_SLEEP = 264,
     FSC_STATS = 265,
     FSC_FOREACH = 266,
     FSC_SET = 267,
     FSC_SHUTDOWN = 268,
     FSC_LOG = 269,
     FSC_SYSTEM = 270,
     FSC_FLOWOP = 271,
     FSC_EVENTGEN = 272,
     FSC_ECHO = 273,
     FSC_LOAD = 274,
     FSC_RUN = 275,
     FSC_USAGE = 276,
     FSC_HELP = 277,
     FSC_VARS = 278,
     FSV_STRING = 279,
     FSV_VAL_INT = 280,
     FSV_VAL_BOOLEAN = 281,
     FSV_VARIABLE = 282,
     FSV_WHITESTRING = 283,
     FST_INT = 284,
     FST_BOOLEAN = 285,
     FSE_FILE = 286,
     FSE_PROC = 287,
     FSE_THREAD = 288,
     FSE_CLEAR = 289,
     FSE_ALL = 290,
     FSE_SNAP = 291,
     FSE_DUMP = 292,
     FSE_DIRECTORY = 293,
     FSE_COMMAND = 294,
     FSE_FILESET = 295,
     FSE_XMLDUMP = 296,
     FSK_SEPLST = 297,
     FSK_OPENLST = 298,
     FSK_CLOSELST = 299,
     FSK_ASSIGN = 300,
     FSK_IN = 301,
     FSK_QUOTE = 302,
     FSK_DIRSEPLST = 303,
     FSA_SIZE = 304,
     FSA_PREALLOC = 305,
     FSA_PARALLOC = 306,
     FSA_PATH = 307,
     FSA_REUSE = 308,
     FSA_PROCESS = 309,
     FSA_MEMSIZE = 310,
     FSA_RATE = 311,
     FSA_CACHED = 312,
     FSA_IOSIZE = 313,
     FSA_FILE = 314,
     FSA_WSS = 315,
     FSA_NAME = 316,
     FSA_RANDOM = 317,
     FSA_INSTANCES = 318,
     FSA_DSYNC = 319,
     FSA_TARGET = 320,
     FSA_ITERS = 321,
     FSA_NICE = 322,
     FSA_VALUE = 323,
     FSA_BLOCKING = 324,
     FSA_HIGHWATER = 325,
     FSA_DIRECTIO = 326,
     FSA_DIRWIDTH = 327,
     FSA_FD = 328,
     FSA_SRCFD = 329,
     FSA_ROTATEFD = 330,
     FSA_NAMELENGTH = 331,
     FSA_FILESIZE = 332,
     FSA_ENTRIES = 333,
     FSA_FILESIZEGAMMA = 334,
     FSA_DIRGAMMA = 335,
     FSA_USEISM = 336
   };
#endif
/* Tokens.  */
#define FSC_LIST 258
#define FSC_DEFINE 259
#define FSC_EXEC 260
#define FSC_QUIT 261
#define FSC_DEBUG 262
#define FSC_CREATE 263
#define FSC_SLEEP 264
#define FSC_STATS 265
#define FSC_FOREACH 266
#define FSC_SET 267
#define FSC_SHUTDOWN 268
#define FSC_LOG 269
#define FSC_SYSTEM 270
#define FSC_FLOWOP 271
#define FSC_EVENTGEN 272
#define FSC_ECHO 273
#define FSC_LOAD 274
#define FSC_RUN 275
#define FSC_USAGE 276
#define FSC_HELP 277
#define FSC_VARS 278
#define FSV_STRING 279
#define FSV_VAL_INT 280
#define FSV_VAL_BOOLEAN 281
#define FSV_VARIABLE 282
#define FSV_WHITESTRING 283
#define FST_INT 284
#define FST_BOOLEAN 285
#define FSE_FILE 286
#define FSE_PROC 287
#define FSE_THREAD 288
#define FSE_CLEAR 289
#define FSE_ALL 290
#define FSE_SNAP 291
#define FSE_DUMP 292
#define FSE_DIRECTORY 293
#define FSE_COMMAND 294
#define FSE_FILESET 295
#define FSE_XMLDUMP 296
#define FSK_SEPLST 297
#define FSK_OPENLST 298
#define FSK_CLOSELST 299
#define FSK_ASSIGN 300
#define FSK_IN 301
#define FSK_QUOTE 302
#define FSK_DIRSEPLST 303
#define FSA_SIZE 304
#define FSA_PREALLOC 305
#define FSA_PARALLOC 306
#define FSA_PATH 307
#define FSA_REUSE 308
#define FSA_PROCESS 309
#define FSA_MEMSIZE 310
#define FSA_RATE 311
#define FSA_CACHED 312
#define FSA_IOSIZE 313
#define FSA_FILE 314
#define FSA_WSS 315
#define FSA_NAME 316
#define FSA_RANDOM 317
#define FSA_INSTANCES 318
#define FSA_DSYNC 319
#define FSA_TARGET 320
#define FSA_ITERS 321
#define FSA_NICE 322
#define FSA_VALUE 323
#define FSA_BLOCKING 324
#define FSA_HIGHWATER 325
#define FSA_DIRECTIO 326
#define FSA_DIRWIDTH 327
#define FSA_FD 328
#define FSA_SRCFD 329
#define FSA_ROTATEFD 330
#define FSA_NAMELENGTH 331
#define FSA_FILESIZE 332
#define FSA_ENTRIES 333
#define FSA_FILESIZEGAMMA 334
#define FSA_DIRGAMMA 335
#define FSA_USEISM 336




/* Copy the first part of user declarations.  */
#line 27 "parser_gram.y"

#pragma ident	"@(#)parser_gram.y	1.2	07/11/09 SMI"
#line 31 "parser_gram.y"


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <locale.h>
#include <sys/utsname.h>
#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/wait.h>
#ifdef HAVE_LIBTECLA
#include <libtecla.h>
#endif
#include "parsertypes.h"
#include "filebench.h"
#include "utils.h"
#include "stats.h"
#include "vars.h"
#include "eventgen.h"
#ifdef HAVE_LIBTECLA
#include "auto_comp.h"
#endif

int dofile = FS_FALSE;
static const char cmdname[] = "filebench";
static const char cmd_options[] = "pa:f:hi:s:m:";
static void usage(int);

static cmd_t *cmd = NULL;		/* Command being processed */
#ifdef HAVE_LIBTECLA
static GetLine *gl;			/* GetLine resource object */
#endif

char *execname;
char *fscriptname;
int noproc = 0;
var_t *var_list = NULL;
pidlist_t *pidlist = NULL;
char *cwd = NULL;
FILE *parentscript = NULL;

static int filecreate_done = 0;

/* yacc externals */
extern FILE *yyin;
extern int yydebug;
extern void yyerror(char *s);

/* lib tecla externals */
extern CPL_MATCH_FN(command_complete);

/* utilities */
static void terminate(void);
static cmd_t *alloc_cmd(void);
static attr_t *alloc_attr(void);
static attr_t *get_attr(cmd_t *cmd, int64_t name);
static attr_t *get_attr_integer(cmd_t *cmd, int64_t name);
static attr_t *get_attr_bool(cmd_t *cmd, int64_t name);
static var_t *alloc_var(void);
static var_t *get_var(cmd_t *cmd, int64_t name);
static list_t *alloc_list();

/* Info Commands */
static void parser_list(cmd_t *);

/* Define Commands */
static void parser_proc_define(cmd_t *);
static void parser_thread_define(cmd_t *, procflow_t *, int instances);
static void parser_flowop_define(cmd_t *, threadflow_t *);
static void parser_file_define(cmd_t *);
static void parser_fileset_define(cmd_t *);

/* Create Commands */
static void parser_proc_create(cmd_t *);
static void parser_thread_create(cmd_t *);
static void parser_flowop_create(cmd_t *);
static void parser_fileset_create(cmd_t *);

/* Shutdown Commands */
static void parser_proc_shutdown(cmd_t *);
static void parser_filebench_shutdown(cmd_t *cmd);

/* Other Commands */
static void parser_foreach_integer(cmd_t *cmd);
static void parser_foreach_string(cmd_t *cmd);
static void parser_sleep(cmd_t *cmd);
static void parser_sleep_variable(cmd_t *cmd);
static void parser_log(cmd_t *cmd);
static void parser_statscmd(cmd_t *cmd);
static void parser_statsdump(cmd_t *cmd);
static void parser_statsxmldump(cmd_t *cmd);
static void parser_echo(cmd_t *cmd);
static void parser_usage(cmd_t *cmd);
static void parser_vars(cmd_t *cmd);
static void parser_printvars(cmd_t *cmd);
static void parser_system(cmd_t *cmd);
static void parser_statssnap(cmd_t *cmd);
static void parser_directory(cmd_t *cmd);
static void parser_eventgen(cmd_t *cmd);
static void parser_run(cmd_t *cmd);
static void parser_run_variable(cmd_t *cmd);
static void parser_help(cmd_t *cmd);
static void arg_parse(const char *command);
static void parser_abort(int arg);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 144 "parser_gram.y"
{
	int64_t	 ival;
	uchar_t  bval;
	char *	 sval;
	fs_u	 val;
	cmd_t	 *cmd;
	attr_t	 *attr;
	list_t	 *list;
}
/* Line 193 of yacc.c.  */
#line 384 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 397 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  185

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    12,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    63,    71,
      73,    77,    81,    87,    89,    92,    95,    98,   101,   103,
     105,   107,   109,   112,   115,   118,   121,   124,   127,   130,
     133,   136,   139,   142,   145,   147,   150,   153,   158,   165,
     170,   175,   178,   181,   185,   189,   193,   197,   199,   201,
     204,   210,   212,   215,   222,   225,   228,   231,   234,   237,
     240,   243,   246,   249,   251,   253,   256,   259,   262,   264,
     266,   268,   270,   272,   274,   278,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   326,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   348,
     350,   352,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      83,     0,    -1,    83,    85,    -1,    83,     1,    -1,    -1,
      85,    -1,    84,    85,    -1,   107,    -1,   100,    -1,    89,
      -1,   108,    -1,    91,    -1,    92,    -1,    93,    -1,    86,
      -1,   112,    -1,    98,    -1,   114,    -1,    99,    -1,   111,
      -1,   101,    -1,   109,    -1,   110,    -1,   102,    -1,    90,
      -1,   103,    -1,    11,    -1,    86,    27,    46,    87,    43,
      84,    44,    -1,    86,    27,    46,    88,    43,    84,    44,
      -1,    25,    -1,    87,    42,    25,    -1,    47,    28,    47,
      -1,    88,    42,    47,    28,    47,    -1,    17,    -1,    89,
     117,    -1,    15,    97,    -1,    18,    97,    -1,    21,    97,
      -1,    23,    -1,    27,    -1,    24,    -1,    94,    -1,    94,
      24,    -1,    94,    27,    -1,    95,    24,    -1,    95,    27,
      -1,    47,    27,    -1,    47,    28,    -1,    96,    28,    -1,
      96,    27,    -1,    97,    28,    -1,    97,    27,    -1,    97,
      47,    -1,    96,    47,    -1,     3,    -1,    14,    97,    -1,
       7,    25,    -1,    12,    27,    45,    25,    -1,    12,    27,
      45,    47,    28,    47,    -1,    12,    27,    45,    24,    -1,
      12,    27,    45,    27,    -1,    10,    36,    -1,    10,    34,
      -1,    10,    38,    95,    -1,    10,    39,    97,    -1,    10,
      37,    97,    -1,    10,    41,    97,    -1,     6,    -1,   113,
      -1,   104,   113,    -1,    33,   117,    43,   104,    44,    -1,
     105,    -1,   106,   105,    -1,     4,    32,   117,    43,   106,
      44,    -1,     4,    31,    -1,     4,    40,    -1,   107,   117,
      -1,     8,   115,    -1,    13,   115,    -1,     9,    25,    -1,
       9,    27,    -1,    20,    25,    -1,    20,    27,    -1,    20,
      -1,    22,    -1,    16,   116,    -1,   113,   117,    -1,    19,
      24,    -1,    32,    -1,    33,    -1,    40,    -1,    31,    -1,
      24,    -1,   118,    -1,   117,    42,   118,    -1,   119,    45,
     126,    -1,   119,    -1,   121,    -1,   122,    -1,   123,    -1,
     120,    -1,   124,    -1,   125,    -1,    67,    -1,    63,    -1,
      49,    -1,    52,    -1,    53,    -1,    50,    -1,    51,    -1,
      49,    -1,    52,    -1,    72,    -1,    50,    -1,    79,    -1,
      80,    -1,    57,    -1,    78,    -1,    54,    -1,    55,    -1,
      81,    -1,    63,    -1,    60,    -1,    59,    -1,    61,    -1,
      62,    -1,    73,    -1,    74,    -1,    75,    -1,    64,    -1,
      71,    -1,    65,    -1,    66,    -1,    68,    -1,    69,    -1,
      70,    -1,    58,    -1,    56,    -1,    95,    -1,    24,    -1,
      25,    -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   205,   205,   215,   220,   222,   227,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   266,   272,   295,   320,
     327,   345,   352,   370,   376,   381,   390,   399,   408,   441,
     448,   456,   459,   477,   494,   512,   531,   538,   546,   564,
     581,   599,   616,   619,   624,   631,   639,   649,   660,   670,
     680,   692,   700,   707,   715,   723,   730,   739,   746,   749,
     767,   779,   782,   800,   808,   813,   819,   824,   843,   858,
     865,   875,   882,   891,   901,   908,   914,   919,   946,   947,
     948,   949,   955,   957,   961,   975,   980,   987,   988,   989,
     990,   991,   992,   995,   996,   999,  1000,  1001,  1002,  1003,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1016,  1017,
    1018,  1019,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1039,  1041,  1045,
    1050,  1054
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FSC_LIST", "FSC_DEFINE", "FSC_EXEC",
  "FSC_QUIT", "FSC_DEBUG", "FSC_CREATE", "FSC_SLEEP", "FSC_STATS",
  "FSC_FOREACH", "FSC_SET", "FSC_SHUTDOWN", "FSC_LOG", "FSC_SYSTEM",
  "FSC_FLOWOP", "FSC_EVENTGEN", "FSC_ECHO", "FSC_LOAD", "FSC_RUN",
  "FSC_USAGE", "FSC_HELP", "FSC_VARS", "FSV_STRING", "FSV_VAL_INT",
  "FSV_VAL_BOOLEAN", "FSV_VARIABLE", "FSV_WHITESTRING", "FST_INT",
  "FST_BOOLEAN", "FSE_FILE", "FSE_PROC", "FSE_THREAD", "FSE_CLEAR",
  "FSE_ALL", "FSE_SNAP", "FSE_DUMP", "FSE_DIRECTORY", "FSE_COMMAND",
  "FSE_FILESET", "FSE_XMLDUMP", "FSK_SEPLST", "FSK_OPENLST",
  "FSK_CLOSELST", "FSK_ASSIGN", "FSK_IN", "FSK_QUOTE", "FSK_DIRSEPLST",
  "FSA_SIZE", "FSA_PREALLOC", "FSA_PARALLOC", "FSA_PATH", "FSA_REUSE",
  "FSA_PROCESS", "FSA_MEMSIZE", "FSA_RATE", "FSA_CACHED", "FSA_IOSIZE",
  "FSA_FILE", "FSA_WSS", "FSA_NAME", "FSA_RANDOM", "FSA_INSTANCES",
  "FSA_DSYNC", "FSA_TARGET", "FSA_ITERS", "FSA_NICE", "FSA_VALUE",
  "FSA_BLOCKING", "FSA_HIGHWATER", "FSA_DIRECTIO", "FSA_DIRWIDTH",
  "FSA_FD", "FSA_SRCFD", "FSA_ROTATEFD", "FSA_NAMELENGTH", "FSA_FILESIZE",
  "FSA_ENTRIES", "FSA_FILESIZEGAMMA", "FSA_DIRGAMMA", "FSA_USEISM",
  "$accept", "commands", "inner_commands", "command", "foreach_command",
  "integer_seplist", "string_seplist", "eventgen_command",
  "system_command", "echo_command", "usage_command", "vars_command",
  "var_string", "var_string_list", "whitevar_string",
  "whitevar_string_list", "list_command", "log_command", "debug_command",
  "set_command", "stats_command", "quit_command", "flowop_list", "thread",
  "thread_list", "define_command", "create_command", "shutdown_command",
  "sleep_command", "run_command", "help_command", "flowop_command",
  "load_command", "entity", "name", "attr_ops", "attr_op", "attr_name",
  "attrs_define_proc", "attrs_define_file", "attrs_define_fileset",
  "attrs_define_thread", "attrs_flowop", "attrs_eventgen", "attr_value", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    83,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    91,    92,    93,    94,
      94,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    97,    98,    99,   100,   101,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   103,   104,   104,
     105,   106,   106,   107,   107,   107,   107,   108,   109,   110,
     110,   111,   111,   111,   112,   113,   113,   114,   115,   115,
     115,   115,   116,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   126,   126,
     126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     1,
       3,     3,     5,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     4,     6,     4,
       4,     2,     2,     3,     3,     3,     3,     1,     1,     2,
       5,     1,     2,     6,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     1,     3,    54,     0,    67,     0,     0,     0,
       0,    26,     0,     0,     0,     0,    33,     0,     0,    83,
       0,    84,    38,     2,    14,     9,    24,    11,    12,    13,
      16,    18,     8,    20,    23,    25,     7,    10,    21,    22,
      19,    15,    17,    74,     0,    75,    56,    91,    88,    89,
      90,    77,    79,    80,    62,    61,     0,     0,     0,     0,
       0,    78,     0,     0,    55,    35,    36,    87,    81,    82,
      37,     0,   105,   108,   109,   106,   107,   118,   119,   137,
     116,   136,   123,   122,   124,   125,   104,   129,   131,   132,
     103,   133,   134,   135,   130,   112,   126,   127,   128,   117,
     114,   115,   120,    34,    93,    96,   100,    97,    98,    99,
     101,   102,    76,     0,    65,    40,    39,    41,    63,    64,
      66,     0,    46,    47,    49,    48,    53,    51,    50,    52,
       0,     0,     0,     0,    42,    43,    44,    45,    59,    57,
      60,     0,    29,     0,     0,     0,    94,    40,   140,    39,
     138,    95,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    72,    58,    31,    30,     0,     5,     0,
       0,     0,    27,     6,     0,    28,     0,     0,    68,    32,
      92,    85,    70,    69,    86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   167,   168,    24,   144,   145,    25,    26,    27,
      28,    29,   117,   118,    63,    64,    30,    31,    32,    33,
      34,    35,   177,   153,   154,    36,    37,    38,    39,    40,
      41,   178,    42,    51,   181,   184,   104,   105,   106,   107,
     108,   109,   110,   111,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -31
static const yytype_int16 yypact[] =
{
     -31,   133,   -31,   -31,   -31,    50,   -31,    -9,     9,   -10,
      55,   -31,    17,     9,     6,     6,   -31,     6,    32,    58,
       6,   -31,   -31,   -31,    57,    51,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,    51,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,    51,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     6,   -14,     6,     6,
      33,   -31,    59,    52,   161,   161,   161,   -31,   -31,   -31,
     161,    42,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,    53,   -31,    82,   -31,   -31,   -31,   -31,
     -31,   -31,    53,   115,   161,   -31,   -31,    27,    28,   161,
     161,    23,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -16,    51,   -19,    64,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   107,   -31,   110,   117,   119,   -31,   -31,   -31,   -31,
      28,   -31,    51,   -31,   -30,   102,   118,   155,   164,   143,
     164,   121,   -31,   -31,   -31,   -31,   -31,    15,   -31,   163,
      54,   176,   -31,   -31,   146,   -31,   170,    -5,    51,   -31,
     -31,   -31,   -31,    51,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -31,   -31,    35,    -1,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,    65,   -31,   -13,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,    44,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,    19,   -31,   186,   -31,   -24,    69,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      23,   103,    65,   152,    66,   147,   148,    70,   149,   142,
     115,   176,   112,   116,   162,    52,    46,    53,     4,     5,
     113,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,   143,    16,    17,    18,    19,    20,    21,    22,   182,
      47,    48,    49,   114,    60,   119,   120,   138,   139,    50,
     140,   134,   136,    62,   135,   137,    67,     4,     5,   172,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
     141,    16,    17,    18,    19,    20,    21,    22,   121,   124,
     125,    43,    44,    68,    71,    69,   122,   123,   130,    54,
      45,    55,    56,    57,    58,   131,    59,   152,   175,   126,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   132,   161,    99,
     100,   101,   102,     2,     3,   155,     4,     5,   156,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,   164,
      16,    17,    18,    19,    20,    21,    22,   131,   133,   157,
     158,   159,   160,   131,   171,   165,   173,     4,     5,   173,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
     166,    16,    17,    18,    19,    20,    21,    22,   127,   128,
     169,   174,   176,   179,   180,   170,   183,   150,   163,    61,
     146,     0,     0,     0,     0,     0,     0,     0,   129
};

static const yytype_int16 yycheck[] =
{
       1,    25,    15,    33,    17,    24,    25,    20,    27,    25,
      24,    16,    36,    27,    44,    25,    25,    27,     3,     4,
      44,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    47,    17,    18,    19,    20,    21,    22,    23,    44,
      31,    32,    33,    56,    27,    58,    59,    24,    25,    40,
      27,    24,    24,    47,    27,    27,    24,     3,     4,    44,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      47,    17,    18,    19,    20,    21,    22,    23,    45,    27,
      28,    31,    32,    25,    27,    27,    27,    28,    46,    34,
      40,    36,    37,    38,    39,    42,    41,    33,    44,    47,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    45,   152,    78,
      79,    80,    81,     0,     1,    28,     3,     4,    28,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    47,
      17,    18,    19,    20,    21,    22,    23,    42,    43,    42,
      43,    42,    43,    42,    43,    47,   167,     3,     4,   170,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      25,    17,    18,    19,    20,    21,    22,    23,    27,    28,
      47,    28,    16,    47,    24,   160,   177,   132,   154,    13,
     131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    83,     0,     1,     3,     4,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    17,    18,    19,    20,
      21,    22,    23,    85,    86,    89,    90,    91,    92,    93,
      98,    99,   100,   101,   102,   103,   107,   108,   109,   110,
     111,   112,   114,    31,    32,    40,    25,    31,    32,    33,
      40,   115,    25,    27,    34,    36,    37,    38,    39,    41,
      27,   115,    47,    96,    97,    97,    97,    24,    25,    27,
      97,    27,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    78,
      79,    80,    81,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   117,   117,    97,    24,    27,    94,    95,    97,
      97,    45,    27,    28,    27,    28,    47,    27,    28,    47,
      46,    42,    45,    43,    24,    27,    24,    27,    24,    25,
      27,    47,    25,    47,    87,    88,   118,    24,    25,    27,
      95,   126,    33,   105,   106,    28,    28,    42,    43,    42,
      43,   117,    44,   105,    47,    47,    25,    84,    85,    47,
      84,    43,    44,    85,    28,    44,    16,   104,   113,    47,
      24,   116,    44,   113,   117
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 206 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	if ((yyvsp[(2) - (2)].cmd)->cmd != NULL)
		(yyvsp[(2) - (2)].cmd)->cmd((yyvsp[(2) - (2)].cmd));

	free((yyvsp[(2) - (2)].cmd));
}
    break;

  case 3:
#line 216 "parser_gram.y"
    {
	if (dofile)
		YYABORT;
}
    break;

  case 5:
#line 223 "parser_gram.y"
    {
	filebench_log(LOG_DEBUG_IMPL, "inner_command %zx", (yyvsp[(1) - (1)].cmd));
	(yyval.cmd) = (yyvsp[(1) - (1)].cmd);
}
    break;

  case 6:
#line 228 "parser_gram.y"
    {
	cmd_t *list = NULL;
	cmd_t *list_end = NULL;

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].cmd); list != NULL;
	    list = list->cmd_next)
		list_end = list;

	list_end->cmd_next = (yyvsp[(2) - (2)].cmd);

	filebench_log(LOG_DEBUG_IMPL,
	    "inner_commands adding cmd %zx to list %zx", (yyvsp[(2) - (2)].cmd), (yyvsp[(1) - (2)].cmd));

	(yyval.cmd) = (yyvsp[(1) - (2)].cmd);
}
    break;

  case 26:
#line 267 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	filebench_log(LOG_DEBUG_IMPL, "foreach_command %zx", (yyval.cmd));
}
    break;

  case 27:
#line 273 "parser_gram.y"
    {
	cmd_t *cmd, *inner_cmd;
	list_t *list;

	(yyval.cmd) = (yyvsp[(1) - (7)].cmd);
	(yyval.cmd)->cmd_list = (yyvsp[(6) - (7)].cmd);
	(yyval.cmd)->cmd_tgt1 = (yyvsp[(2) - (7)].sval);
	(yyval.cmd)->cmd_param_list = (yyvsp[(4) - (7)].list);
	(yyval.cmd)->cmd = parser_foreach_integer;

	for (list = (yyval.cmd)->cmd_param_list; list != NULL;
	    list = list->list_next) {
		for (inner_cmd = (yyval.cmd)->cmd_list;
		    inner_cmd != NULL;
		    inner_cmd = inner_cmd->cmd_next) {
			filebench_log(LOG_DEBUG_IMPL,
			    "packing foreach: %zx %s=%lld, cmd %zx",
			    (yyval.cmd),
			    (yyval.cmd)->cmd_tgt1,
			    *list->list_integer, inner_cmd);
		}
	}
}
    break;

  case 28:
#line 296 "parser_gram.y"
    {
	cmd_t *cmd, *inner_cmd;
	list_t *list;

	(yyval.cmd) = (yyvsp[(1) - (7)].cmd);
	(yyval.cmd)->cmd_list = (yyvsp[(6) - (7)].cmd);
	(yyval.cmd)->cmd_tgt1 = (yyvsp[(2) - (7)].sval);
	(yyval.cmd)->cmd_param_list = (yyvsp[(4) - (7)].list);
	(yyval.cmd)->cmd = parser_foreach_string;

	for (list = (yyval.cmd)->cmd_param_list; list != NULL;
	    list = list->list_next) {
		for (inner_cmd = (yyval.cmd)->cmd_list;
		    inner_cmd != NULL;
		    inner_cmd = inner_cmd->cmd_next) {
			filebench_log(LOG_DEBUG_IMPL,
			    "packing foreach: %zx %s=%s, cmd %zx",
			    (yyval.cmd),
			    (yyval.cmd)->cmd_tgt1,
			    *list->list_string, inner_cmd);
		}
	}
}
    break;

  case 29:
#line 321 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_integer = integer_alloc((yyvsp[(1) - (1)].ival));
}
    break;

  case 30:
#line 328 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_integer = integer_alloc((yyvsp[(3) - (3)].ival));

	/* Find end of list */
	for (list = (yyvsp[(1) - (3)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (3)].list);
}
    break;

  case 31:
#line 346 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (3)].sval));
}
    break;

  case 32:
#line 353 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	if (((yyval.list) = alloc_list()) == NULL)
			YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(4) - (5)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (5)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (5)].list);
}
    break;

  case 33:
#line 371 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_eventgen;
}
    break;

  case 34:
#line 377 "parser_gram.y"
    {
	(yyvsp[(1) - (2)].cmd)->cmd_attr_list = (yyvsp[(2) - (2)].attr);
}
    break;

  case 35:
#line 382 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(2) - (2)].list);
	(yyval.cmd)->cmd = parser_system;
}
    break;

  case 36:
#line 391 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(2) - (2)].list);
	(yyval.cmd)->cmd = parser_echo;
}
    break;

  case 37:
#line 400 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(2) - (2)].list);
	(yyval.cmd)->cmd = parser_usage;
}
    break;

  case 38:
#line 409 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd = parser_printvars;
}
    break;

  case 39:
#line 442 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
			YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(1) - (1)].sval));
}
    break;

  case 40:
#line 449 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
			YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(1) - (1)].sval));
}
    break;

  case 41:
#line 457 "parser_gram.y"
    {
	(yyval.list) = (yyvsp[(1) - (1)].list);
}
    break;

  case 42:
#line 460 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add string */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);

}
    break;

  case 43:
#line 478 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add variable */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 44:
#line 495 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add string */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);

}
    break;

  case 45:
#line 513 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add variable */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 46:
#line 532 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
			YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 47:
#line 539 "parser_gram.y"
    {
	if (((yyval.list) = alloc_list()) == NULL)
			YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 48:
#line 547 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add string */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);

}
    break;

  case 49:
#line 565 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add variable */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 50:
#line 582 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add string */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);

}
    break;

  case 51:
#line 600 "parser_gram.y"
    {
	list_t *list = NULL;
	list_t *list_end = NULL;

	/* Add variable */
	if (((yyval.list) = alloc_list()) == NULL)
		YYERROR;

	(yyval.list)->list_string = string_alloc((yyvsp[(2) - (2)].sval));

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].list); list != NULL;
	    list = list->list_next)
		list_end = list;
	list_end->list_next = (yyval.list);
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 52:
#line 617 "parser_gram.y"
    {
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 53:
#line 620 "parser_gram.y"
    {
	(yyval.list) = (yyvsp[(1) - (2)].list);
}
    break;

  case 54:
#line 625 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_list;
}
    break;

  case 55:
#line 632 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_log;
	(yyval.cmd)->cmd_param_list = (yyvsp[(2) - (2)].list);
}
    break;

  case 56:
#line 640 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = NULL;
	filebench_shm->debug_level = (yyvsp[(2) - (2)].ival);
	if (filebench_shm->debug_level > 9)
		yydebug = 1;
}
    break;

  case 57:
#line 650 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	var_assign_integer((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ival));
	if (parentscript) {
		(yyval.cmd)->cmd_tgt1 = (yyvsp[(2) - (4)].sval);
		parser_vars((yyval.cmd));
	}
	(yyval.cmd)->cmd = NULL;
}
    break;

  case 58:
#line 661 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	var_assign_string((yyvsp[(2) - (6)].sval), (yyvsp[(5) - (6)].sval));
	if (parentscript) {
		(yyval.cmd)->cmd_tgt1 = (yyvsp[(2) - (6)].sval);
		parser_vars((yyval.cmd));
	}
	(yyval.cmd)->cmd = NULL;
}
    break;

  case 59:
#line 671 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	var_assign_string((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval));
	if (parentscript) {
		(yyval.cmd)->cmd_tgt1 = (yyvsp[(2) - (4)].sval);
		parser_vars((yyval.cmd));
	}
	(yyval.cmd)->cmd = NULL;
}
    break;

  case 60:
#line 681 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	var_assign_var((yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].sval));
	if (parentscript) {
		(yyval.cmd)->cmd_tgt1 = (yyvsp[(2) - (4)].sval);
		parser_vars((yyval.cmd));
	}
	(yyval.cmd)->cmd = NULL;
}
    break;

  case 61:
#line 693 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = (void (*)(struct cmd *))&parser_statssnap;
	break;

}
    break;

  case 62:
#line 701 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = (void (*)(struct cmd *))&stats_clear;

}
    break;

  case 63:
#line 708 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd_param_list = (yyvsp[(3) - (3)].list);
	(yyval.cmd)->cmd = (void (*)(struct cmd *))&parser_directory;

}
    break;

  case 64:
#line 716 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(3) - (3)].list);
	(yyval.cmd)->cmd = parser_statscmd;

}
    break;

  case 65:
#line 724 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(3) - (3)].list);
	(yyval.cmd)->cmd = parser_statsdump;
}
    break;

  case 66:
#line 731 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(yyval.cmd)->cmd_param_list = (yyvsp[(3) - (3)].list);
	(yyval.cmd)->cmd = parser_statsxmldump;
}
    break;

  case 67:
#line 740 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_filebench_shutdown;
}
    break;

  case 68:
#line 747 "parser_gram.y"
    {
	(yyval.cmd) = (yyvsp[(1) - (1)].cmd);
}
    break;

  case 69:
#line 750 "parser_gram.y"
    {
	cmd_t *list = NULL;
	cmd_t *list_end = NULL;

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].cmd); list != NULL;
	    list = list->cmd_next)
		list_end = list;

	list_end->cmd_next = (yyvsp[(2) - (2)].cmd);

	filebench_log(LOG_DEBUG_IMPL,
	    "flowop_list adding cmd %zx to list %zx", (yyvsp[(2) - (2)].cmd), (yyvsp[(1) - (2)].cmd));

	(yyval.cmd) = (yyvsp[(1) - (2)].cmd);
}
    break;

  case 70:
#line 768 "parser_gram.y"
    {
	/*
	 * Allocate a cmd node per thread, with a
	 * list of flowops attached to the cmd_list
	 */
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd_list = (yyvsp[(4) - (5)].cmd);
	(yyval.cmd)->cmd_attr_list = (yyvsp[(2) - (5)].attr);
}
    break;

  case 71:
#line 780 "parser_gram.y"
    {
	(yyval.cmd) = (yyvsp[(1) - (1)].cmd);
}
    break;

  case 72:
#line 783 "parser_gram.y"
    {
	cmd_t *list = NULL;
	cmd_t *list_end = NULL;

	/* Find end of list */
	for (list = (yyvsp[(1) - (2)].cmd); list != NULL;
	    list = list->cmd_next)
		list_end = list;

	list_end->cmd_next = (yyvsp[(2) - (2)].cmd);

	filebench_log(LOG_DEBUG_IMPL,
	    "thread_list adding cmd %zx to list %zx", (yyvsp[(2) - (2)].cmd), (yyvsp[(1) - (2)].cmd));

	(yyval.cmd) = (yyvsp[(1) - (2)].cmd);
}
    break;

  case 73:
#line 801 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_proc_define;
	(yyval.cmd)->cmd_list = (yyvsp[(5) - (6)].cmd);
	(yyval.cmd)->cmd_attr_list = (yyvsp[(3) - (6)].attr);

}
    break;

  case 74:
#line 809 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_file_define;
}
    break;

  case 75:
#line 814 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = &parser_fileset_define;
}
    break;

  case 76:
#line 820 "parser_gram.y"
    {
	(yyvsp[(1) - (2)].cmd)->cmd_attr_list = (yyvsp[(2) - (2)].attr);
}
    break;

  case 77:
#line 825 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	switch ((yyvsp[(2) - (2)].ival)) {
	case FSE_PROC:
		(yyval.cmd)->cmd = &parser_proc_create;
		break;
	case FSE_FILESET:
	case FSE_FILE:
		(yyval.cmd)->cmd = &parser_fileset_create;
		break;
	default:
		filebench_log(LOG_ERROR, "unknown entity", (yyvsp[(2) - (2)].ival));
		YYERROR;
	}

}
    break;

  case 78:
#line 844 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	switch ((yyvsp[(2) - (2)].ival)) {
	case FSE_PROC:
		(yyval.cmd)->cmd = &parser_proc_shutdown;
		break;
	default:
		filebench_log(LOG_ERROR, "unknown entity", (yyvsp[(2) - (2)].ival));
		YYERROR;
	}

}
    break;

  case 79:
#line 859 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_sleep;
	(yyval.cmd)->cmd_qty = (yyvsp[(2) - (2)].ival);
}
    break;

  case 80:
#line 866 "parser_gram.y"
    {
	vinteger_t *integer;

	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_sleep_variable;
	(yyval.cmd)->cmd_tgt1 = fb_stralloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 81:
#line 876 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_run;
	(yyval.cmd)->cmd_qty = (yyvsp[(2) - (2)].ival);
}
    break;

  case 82:
#line 883 "parser_gram.y"
    {
	vinteger_t *integer;

	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_run_variable;
	(yyval.cmd)->cmd_tgt1 = fb_stralloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 83:
#line 892 "parser_gram.y"
    {
	vinteger_t *integer;

	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_run;
	(yyval.cmd)->cmd_qty = 60UL;
}
    break;

  case 84:
#line 902 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd = parser_help;
}
    break;

  case 85:
#line 909 "parser_gram.y"
    {
	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;
	(yyval.cmd)->cmd_name = fb_stralloc((yyvsp[(2) - (2)].sval));
}
    break;

  case 86:
#line 915 "parser_gram.y"
    {
	(yyvsp[(1) - (2)].cmd)->cmd_attr_list = (yyvsp[(2) - (2)].attr);
}
    break;

  case 87:
#line 920 "parser_gram.y"
    {
	FILE *newfile;
	char loadfile[128];

	if (((yyval.cmd) = alloc_cmd()) == NULL)
		YYERROR;

	(void) strcpy(loadfile, (yyvsp[(2) - (2)].sval));
	(void) strcat(loadfile, ".f");

	if ((newfile = fopen(loadfile, "r")) == NULL) {
		(void) strcpy(loadfile, FILEBENCHDIR);
		(void) strcat(loadfile, "/workloads/");
		(void) strcat(loadfile, (yyvsp[(2) - (2)].sval));
		(void) strcat(loadfile, ".f");
		if ((newfile = fopen(loadfile, "r")) == NULL) {
			filebench_log(LOG_ERROR, "Cannot open %s", loadfile);
			YYERROR;
		}
	}

	parentscript = yyin;
	yyin = newfile;
	yy_switchfileparent(yyin);
}
    break;

  case 88:
#line 946 "parser_gram.y"
    {(yyval.ival) = FSE_PROC;}
    break;

  case 89:
#line 947 "parser_gram.y"
    {(yyval.ival) = FSE_THREAD;}
    break;

  case 90:
#line 948 "parser_gram.y"
    {(yyval.ival) = FSE_FILESET;}
    break;

  case 91:
#line 949 "parser_gram.y"
    {(yyval.ival) = FSE_FILE;}
    break;

  case 93:
#line 958 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(1) - (1)].attr);
}
    break;

  case 94:
#line 962 "parser_gram.y"
    {
	attr_t *attr = NULL;
	attr_t *list_end = NULL;

	for (attr = (yyvsp[(1) - (3)].attr); attr != NULL;
	    attr = attr->attr_next)
		list_end = attr; /* Find end of list */

	list_end->attr_next = (yyvsp[(3) - (3)].attr);

	(yyval.attr) = (yyvsp[(1) - (3)].attr);
}
    break;

  case 95:
#line 976 "parser_gram.y"
    {
	(yyval.attr) = (yyvsp[(3) - (3)].attr);
	(yyval.attr)->attr_name = (yyvsp[(1) - (3)].ival);
}
    break;

  case 96:
#line 981 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_name = (yyvsp[(1) - (1)].ival);
}
    break;

  case 103:
#line 995 "parser_gram.y"
    { (yyval.ival) = FSA_NICE;}
    break;

  case 104:
#line 996 "parser_gram.y"
    { (yyval.ival) = FSA_INSTANCES;}
    break;

  case 105:
#line 999 "parser_gram.y"
    { (yyval.ival) = FSA_SIZE;}
    break;

  case 106:
#line 1000 "parser_gram.y"
    { (yyval.ival) = FSA_PATH;}
    break;

  case 107:
#line 1001 "parser_gram.y"
    { (yyval.ival) = FSA_REUSE;}
    break;

  case 108:
#line 1002 "parser_gram.y"
    { (yyval.ival) = FSA_PREALLOC;}
    break;

  case 109:
#line 1003 "parser_gram.y"
    { (yyval.ival) = FSA_PARALLOC;}
    break;

  case 110:
#line 1006 "parser_gram.y"
    { (yyval.ival) = FSA_SIZE;}
    break;

  case 111:
#line 1007 "parser_gram.y"
    { (yyval.ival) = FSA_PATH;}
    break;

  case 112:
#line 1008 "parser_gram.y"
    { (yyval.ival) = FSA_DIRWIDTH;}
    break;

  case 113:
#line 1009 "parser_gram.y"
    { (yyval.ival) = FSA_PREALLOC;}
    break;

  case 114:
#line 1010 "parser_gram.y"
    { (yyval.ival) = FSA_FILESIZEGAMMA;}
    break;

  case 115:
#line 1011 "parser_gram.y"
    { (yyval.ival) = FSA_DIRGAMMA;}
    break;

  case 116:
#line 1012 "parser_gram.y"
    { (yyval.ival) = FSA_CACHED;}
    break;

  case 117:
#line 1013 "parser_gram.y"
    { (yyval.ival) = FSA_ENTRIES;}
    break;

  case 118:
#line 1016 "parser_gram.y"
    { (yyval.ival) = FSA_PROCESS;}
    break;

  case 119:
#line 1017 "parser_gram.y"
    { (yyval.ival) = FSA_MEMSIZE;}
    break;

  case 120:
#line 1018 "parser_gram.y"
    { (yyval.ival) = FSA_USEISM;}
    break;

  case 121:
#line 1019 "parser_gram.y"
    { (yyval.ival) = FSA_INSTANCES;}
    break;

  case 122:
#line 1022 "parser_gram.y"
    { (yyval.ival) = FSA_WSS;}
    break;

  case 123:
#line 1023 "parser_gram.y"
    { (yyval.ival) = FSA_FILE;}
    break;

  case 124:
#line 1024 "parser_gram.y"
    { (yyval.ival) = FSA_NAME;}
    break;

  case 125:
#line 1025 "parser_gram.y"
    { (yyval.ival) = FSA_RANDOM;}
    break;

  case 126:
#line 1026 "parser_gram.y"
    { (yyval.ival) = FSA_FD;}
    break;

  case 127:
#line 1027 "parser_gram.y"
    { (yyval.ival) = FSA_SRCFD;}
    break;

  case 128:
#line 1028 "parser_gram.y"
    { (yyval.ival) = FSA_ROTATEFD;}
    break;

  case 129:
#line 1029 "parser_gram.y"
    { (yyval.ival) = FSA_DSYNC;}
    break;

  case 130:
#line 1030 "parser_gram.y"
    { (yyval.ival) = FSA_DIRECTIO;}
    break;

  case 131:
#line 1031 "parser_gram.y"
    { (yyval.ival) = FSA_TARGET;}
    break;

  case 132:
#line 1032 "parser_gram.y"
    { (yyval.ival) = FSA_ITERS;}
    break;

  case 133:
#line 1033 "parser_gram.y"
    { (yyval.ival) = FSA_VALUE;}
    break;

  case 134:
#line 1034 "parser_gram.y"
    { (yyval.ival) = FSA_BLOCKING;}
    break;

  case 135:
#line 1035 "parser_gram.y"
    { (yyval.ival) = FSA_HIGHWATER;}
    break;

  case 136:
#line 1036 "parser_gram.y"
    { (yyval.ival) = FSA_IOSIZE;}
    break;

  case 137:
#line 1039 "parser_gram.y"
    { (yyval.ival) = FSA_RATE;}
    break;

  case 138:
#line 1041 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_param_list = (yyvsp[(1) - (1)].list);
}
    break;

  case 139:
#line 1046 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_string = string_alloc((yyvsp[(1) - (1)].sval));
}
    break;

  case 140:
#line 1050 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_integer = integer_alloc((yyvsp[(1) - (1)].ival));
}
    break;

  case 141:
#line 1054 "parser_gram.y"
    {
	if (((yyval.attr) = alloc_attr()) == NULL)
		YYERROR;
	(yyval.attr)->attr_integer = var_ref_integer((yyvsp[(1) - (1)].sval));
	(yyval.attr)->attr_string = var_ref_string((yyvsp[(1) - (1)].sval));
}
    break;


/* Line 1267 of yacc.c.  */
#line 2964 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1061 "parser_gram.y"


/*
 *  The following 'c' routines implement the various commands defined in the
 * above yacc parser code. The yacc portion checks the syntax of the commands
 * found in a workload file, or typed on interactive command lines, parsing
 * the commands' parameters into lists. The lists are then passed in a cmd_t
 * struct for each command to its related routine in the following section
 * for actual execution. This section also includes a few utility routines
 * and the main entry point for the program.
 */

/*
 * Entry point for filebench. Processes command line arguements. The -f
 * option will read in a workload file (the full name and extension must
 * must be given). The -a, -s, -m and -i options are used by worker process
 * to receive their name, the base address of shared memory, its path, and
 * the process' instance number, respectively. This information is supplied
 * by the master process when it execs worker processes under the process
 * model of execution. If the worker process arguments are passed then main
 * will call the procflow_exec routine which creates worker threadflows and
 * flowops and executes the procflow's portion of the workload model until
 * completion. If worker process arguments are not passed to the process,
 * then it becomes the master process for a filebench run. It initializes
 * the various filebench components and either executes the supplied workload
 * file, or enters interactive mode.
 */

int
main(int argc, char *argv[])
{
	int opt;
	int docmd = FS_FALSE;
	int instance;
	char procname[128];
	caddr_t shmaddr;
	char dir[MAXPATHLEN];
#ifdef HAVE_SETRLIMIT
	struct rlimit rlp;
#endif
#ifdef HAVE_LIBTECLA
	char *line;
#else
	char line[1024];
#endif
	char shmpathtmp[1024];

#ifdef HAVE_SETRLIMIT
	/* Set resource limits */
	(void) getrlimit(RLIMIT_NOFILE, &rlp);
	rlp.rlim_cur = rlp.rlim_max;
	setrlimit(RLIMIT_NOFILE, &rlp);
#endif

	yydebug = 0;
	execname = argv[0];
	*procname = 0;
	cwd = getcwd(dir, MAXPATHLEN);

	while ((opt = getopt(argc, argv, cmd_options)) != (int)EOF) {

		switch (opt) {
		case 'h':
			usage(2);
			break;

		case 'p':
			noproc = 1;
			break;

		case 'f':
			if (optarg == NULL)
				usage(1);
			if ((yyin = fopen(optarg, "r")) == NULL) {
				(void) fprintf(stderr,
				    "Cannot open file %s", optarg);
				exit(1);
			}
			dofile = FS_TRUE;
			fscriptname = optarg;

			break;

		case 'a':
			if (optarg == NULL)
				usage(1);
			sscanf(optarg, "%s", &procname[0]);
			break;

		case 's':
			if (optarg == NULL)
				usage(1);
#if defined(_LP64) || (__WORDSIZE == 64)
			sscanf(optarg, "%llx", &shmaddr);
#else
			sscanf(optarg, "%x", &shmaddr);
#endif
			break;

		case 'm':
			if (optarg == NULL)
				usage(1);
			sscanf(optarg, "%s", shmpathtmp);
			shmpath = shmpathtmp;
			break;

		case 'i':
			if (optarg == NULL)
				usage(1);
			sscanf(optarg, "%d", &instance);
			break;

		case '?':
		default:
			usage(1);
			break;
		}
	}

#ifdef USE_PROCESS_MODEL
	if (!(*procname))
#endif

#ifdef USE_PROCESS_MODEL
	printf("FileBench Version %s (process+thread model)\n", FILEBENCH_VERSION);
#else
	printf("FileBench Version %s (thread-only model)\n", FILEBENCH_VERSION);
#endif
	filebench_init();

#ifdef USE_PROCESS_MODEL
	if (*procname) {
		pid = getpid();

		if (ipc_attach(shmaddr) < 0) {
			filebench_log(LOG_ERROR, "Cannot attach shm for %s",
			    procname);
			exit(1);
		}

		if (procflow_exec(procname, instance) < 0) {
			filebench_log(LOG_ERROR, "Cannot startup process %s",
			    procname);
			exit(1);
		}
		exit(1);
	}
#endif

	pid = getpid();
	ipc_init();

	if (fscriptname)
		(void) strcpy(filebench_shm->fscriptname, fscriptname);

	flowop_init();
	stats_init();
	eventgen_init();

	signal(SIGINT, parser_abort);

	if (dofile)
		yyparse();
	else {
#ifdef HAVE_LIBTECLA
		if ((gl = new_GetLine(MAX_LINE_LEN, MAX_CMD_HIST)) == NULL) {
			filebench_log(LOG_ERROR,
			    "Failed to create GetLine object");
			filebench_shutdown(1);
		}

		if (gl_customize_completion(gl, NULL, command_complete)) {
			filebench_log(LOG_ERROR,
			    "Failed to register auto-completion function");
			filebench_shutdown(1);
		}

		while (line = gl_get_line(gl, FILEBENCH_PROMPT, NULL, -1)) {
			arg_parse(line);
			yyparse();
		}

		del_GetLine(gl);
#else
		while (!feof(stdin)) {
			printf(FILEBENCH_PROMPT);
			fflush(stdout);
			if (fgets(line, sizeof (line), stdin) == NULL) {
				if (errno == EINTR)
					continue;
				else
					break;
			}
			arg_parse(line);
			yyparse();
		}
		printf("\n");
#endif	/* HAVE_LIBTECLA */
	}

	parser_filebench_shutdown((cmd_t *)0);

	return (0);
}

/*
 * arg_parse() puts the parser into command parsing mode. Create a tmpfile
 * and instruct the parser to read instructions from this location by setting
 * yyin to the value returned by tmpfile. Write the command into the file.
 * Then seek back to to the start of the file so that the parser can read
 * the instructions.
 */
static void
arg_parse(const char *command)
{
	if ((yyin = tmpfile()) == NULL)
		filebench_log(LOG_FATAL,
		    "Cannot create tmpfile: %s", strerror(errno));

	if (fwrite(command, strlen(command), 1, yyin) != 1)
		filebench_log(LOG_FATAL,
		    "Cannot write tmpfile: %s", strerror(errno));

	if (fseek(yyin, 0, SEEK_SET) != 0)
		filebench_log(LOG_FATAL,
		    "Cannot seek tmpfile: %s", strerror(errno));
}

/*
 * Converts a list of var_strings or ordinary strings to a single ordinary
 * string. It returns a pointer to the string (in malloc'd memory) if found,
 * or NULL otherwise.
 */
char *
parser_list2string(list_t *list)
{
	list_t *l;
	char *string;
	char *tmp;
	vinteger_t *integer;

	if ((string = malloc(MAXPATHLEN)) == NULL) {
		filebench_log(LOG_ERROR, "Failed to allocate memory");
		return (NULL);
	}

	*string = 0;


	/* Format args */
	for (l = list; l != NULL;
	    l = l->list_next) {
		filebench_log(LOG_DEBUG_SCRIPT,
		    "converting string '%s'", *l->list_string);

		if ((tmp = var_to_string(*l->list_string)) != NULL) {
			(void) strcat(string, tmp);
			free(tmp);
		} else {
			(void) strcat(string, *l->list_string);
		}
	}
	return (string);
}

/*
 * If the list just contains a single string starting with '$', then find
 * or create the named var and return the var's var_string component.
 * Otherwise, convert the list to a string, and allocate a var_string
 * containing a copy of that string. On failure either returns NULL
 * or shuts down the run.
 */
var_string_t
parser_list2varstring(list_t *list)
{
	/* Special case - variable name */
	if ((list->list_next == NULL) && (*(*list->list_string) == '$'))
		return (var_ref_string(*list->list_string));

	return (string_alloc(parser_list2string(list)));
}

/*
 * Looks for the var named in list_string of the first element of the
 * supplied list. If found, returns the var_integer portion of the var.
 * If the var is not found, cannot be allocated, the supplied list is
 * NULL, or the list_string filed is empty, returns NULL.
 */
var_integer_t
parser_list2integer(list_t *list)
{
	var_integer_t v;

	if (list && (*(list->list_string) != NULL)) {
		v = var_ref_integer(*(list->list_string));
		return (v);
	}

	return (NULL);
}

/*
 * Sets the event generator rate from the attribute supplied with the
 * command. If the attribute doesn't exist the routine does nothing.
 */
static void
parser_eventgen(cmd_t *cmd)
{
	attr_t *attr;
	vinteger_t rate;

	/* Get the rate from attribute */
	if (attr = get_attr_integer(cmd, FSA_RATE)) {
		if (attr->attr_integer) {
			filebench_log(LOG_VERBOSE,
			    "Eventgen: %lld per second",
			    *attr->attr_integer);
			eventgen_setrate(*attr->attr_integer);
		}
	}

}

/*
 * Assigns the designated integer variable successive values from the
 * supplied comma seperated integer list. After each successive integer
 * assignment, it executes the bracket enclosed list of commands. For
 * example, repeated runs of a workload with increasing io sizes can
 * be done using the following command line:
 * 	foreach $iosize in 2k, 4k, 8k {run 60}
 */
static void
parser_foreach_integer(cmd_t *cmd)
{
	list_t *list = cmd->cmd_param_list;
	cmd_t *inner_cmd;

	for (; list != NULL; list = list->list_next) {
		var_assign_integer(cmd->cmd_tgt1, *list->list_integer);
		filebench_log(LOG_VERBOSE, "Iterating %s=%lld",
		    cmd->cmd_tgt1,
		    *list->list_integer);
		for (inner_cmd = cmd->cmd_list; inner_cmd != NULL;
		    inner_cmd = inner_cmd->cmd_next) {
			inner_cmd->cmd(inner_cmd);
		}
	}
}

/*
 * Similar to parser_foreach_integer(), except takes a list of strings after
 * the "in" token. For example, to run twice using a different directory,
 * perhaps using a different filesystem, the following command line
 * could be used:
 * 	foreach $dir in "/ufs_top/fbt", "/zfs_top/fbt" {run 60)
 */
static void
parser_foreach_string(cmd_t *cmd)
{
	list_t *list = cmd->cmd_param_list;
	cmd_t *inner_cmd;

	for (; list != NULL; list = list->list_next) {
		var_assign_string(cmd->cmd_tgt1, *list->list_string);
		filebench_log(LOG_VERBOSE, "Iterating %s=%s",
		    cmd->cmd_tgt1,
		    *list->list_string);
		for (inner_cmd = cmd->cmd_list; inner_cmd != NULL;
		    inner_cmd = inner_cmd->cmd_next) {
			inner_cmd->cmd(inner_cmd);
		}
	}
}

/*
 * Lists the fileset name, path name and average size for all defined
 * filesets.
 */
static void
parser_list(cmd_t *cmd)
{
	(void) fileset_iter(fileset_print);
}

/*
 * Calls procflow_define() to allocate "instances" number of  procflow(s)
 * (processes) with the supplied name. The default number of instances is
 * one. An optional priority level attribute can be supplied and is stored in
 * pf_nice. Finally the routine loops through the list of inner commands, if
 * any, which are defines for threadflows, and passes them one at a time to
 * parser_thread_define() to allocate threadflow entities for the process(es).
 */
static void
parser_proc_define(cmd_t *cmd)
{
	procflow_t *procflow, template;
	char *name;
	attr_t *attr;
	var_integer_t instances = integer_alloc(1);
	cmd_t *inner_cmd;

	/* Get the name of the process */
	if (attr = get_attr(cmd, FSA_NAME)) {
		name = *attr->attr_string;
	} else {
		filebench_log(LOG_ERROR,
		    "define proc: proc specifies no name");
		filebench_shutdown(1);
	}

	/* Get the memory size from attribute */
	if (attr = get_attr_integer(cmd, FSA_INSTANCES)) {
		filebench_log(LOG_DEBUG_IMPL,
		    "Setting instances = %lld",
		    *attr->attr_integer);
		instances = attr->attr_integer;
	}

	if ((procflow = procflow_define(name, NULL, instances)) == NULL) {
		filebench_log(LOG_ERROR,
		    "Failed to instantiate %d %s process(es)\n",
		    instances, name);
		filebench_shutdown(1);
	}

	/* Get the pri from attribute */
	if (attr = get_attr_integer(cmd, FSA_NICE)) {
		filebench_log(LOG_DEBUG_IMPL, "Setting pri = %lld",
		    *attr->attr_integer);
		procflow->pf_nice = attr->attr_integer;
	} else
		procflow->pf_nice = integer_alloc(0);


	/* Create the list of threads for this process  */
	for (inner_cmd = cmd->cmd_list; inner_cmd != NULL;
	    inner_cmd = inner_cmd->cmd_next) {
		parser_thread_define(inner_cmd, procflow, *instances);
	}
}

/*
 * Calls threadflow_define() to allocate "instances" number of  threadflow(s)
 * (threads) with the supplied name. The default number of instances is
 * one. Two other optional attributes may be supplied, one to set the memory
 * size, stored in tf_memsize, and to select the use of Interprocess Shared
 * Memory, which sets the THREADFLOW_USEISM flag in tf_attrs. Finally
 * the routine loops through the list of inner commands, if any, which are
 * defines for flowops, and passes them one at a time to
 * parser_flowop_define() to allocate flowop entities for the threadflows.
 */
static void
parser_thread_define(cmd_t *cmd, procflow_t *procflow, int procinstances)
{
	threadflow_t *threadflow, template;
	attr_t *attr;
	var_integer_t instances = integer_alloc(1);
	cmd_t *inner_cmd;
	char *name;

	memset(&template, 0, sizeof (threadflow_t));

	/* Get the name of the thread */
	if (attr = get_attr(cmd, FSA_NAME)) {
		name = *attr->attr_string;
	} else {
		filebench_log(LOG_ERROR,
		    "define thread: thread in process %s specifies no name",
		    procflow->pf_name);
		filebench_shutdown(1);
	}

	/* Get the number of instances from attribute */
	if (attr = get_attr_integer(cmd, FSA_INSTANCES)) {
		filebench_log(LOG_DEBUG_IMPL,
		    "define thread: Setting instances = %lld",
		    *attr->attr_integer);
		instances = attr->attr_integer;
	}

	/* Get the memory size from attribute */
	if (attr = get_attr_integer(cmd, FSA_MEMSIZE)) {
		filebench_log(LOG_DEBUG_IMPL,
		    "define thread: Setting memsize = %lld",
		    *attr->attr_integer);
		template.tf_memsize = attr->attr_integer;
	} else
		template.tf_memsize = integer_alloc(0);

	if ((threadflow = threadflow_define(procflow, name,
	    &template, instances)) == NULL) {
		filebench_log(LOG_ERROR,
		    "define thread: Failed to instantiate thread\n");
		filebench_shutdown(1);
	}

	/* Use ISM Memory? */
	if (attr = get_attr(cmd, FSA_USEISM)) {
		threadflow->tf_attrs |= THREADFLOW_USEISM;
	}

	/* Create the list of flowops */
	for (inner_cmd = cmd->cmd_list; inner_cmd != NULL;
	    inner_cmd = inner_cmd->cmd_next) {
		parser_flowop_define(inner_cmd, threadflow);
	}
}

/*
 * Calls flowop_define() to allocate a flowop with the supplied name.
 * The allocated flowop inherits attributes from a base flowop of the
 * same type.  If the new flowop has a file or fileset attribute specified,
 * it must specify a defined fileobj or fileset or an error will be logged.
 * The new flowop may  also have the following attributes set by
 * the program:
 *  - file size (fo_iosize)
 *  - working set size (fo_wss)
 *  - do random io (fo_random)
 *  - do synchronous io (fo_dsync)
 *  - perform each operation multiple times before advancing (fo_iter)
 *  - target name (fo_targetname)
 *  - An integer value (fo_value)
 *  - a file descriptor (fo_fd)
 *  - specify to rotate file descriptors (fo_rotatefd)
 *  - a source fd (fo_srcfdnumber)
 *  - specify a blocking operation (fo_blocking)
 *  - specify a highwater mark (fo_highwater)
 *
 * After all the supplied attributes are stored in their respective locations
 * in the flowop object, the flowop's init function is called. No errors are
 * returned, but the filebench run will be terminated if the flowtype is not
 * specified, a name for the new flowop is not supplied, the flowop_define
 * call fails, or a file or fileset name is supplied but the corresponding
 * fileobj or fileset cannot be located.
 */
static void
parser_flowop_define(cmd_t *cmd, threadflow_t *thread)
{
	flowop_t *flowop, *flowop_type;
	char *type = (char *)cmd->cmd_name;
	char *name;
	attr_t *attr;

	/* Get the inherited flowop */
	flowop_type = flowop_find(type);
	if (flowop_type == NULL) {
		filebench_log(LOG_ERROR,
		    "define flowop: flowop type %s not found",
		    type);
		filebench_shutdown(1);
	}

	/* Get the name of the flowop */
	if (attr = get_attr(cmd, FSA_NAME)) {
		name = *attr->attr_string;
	} else {
		filebench_log(LOG_ERROR,
		    "define flowop: flowop %s specifies no name",
		    flowop_type->fo_name);
		filebench_shutdown(1);
	}

	if ((flowop = flowop_define(thread, name,
	    flowop_type, FLOW_MASTER, 0)) == NULL) {
		filebench_log(LOG_ERROR,
		    "define flowop: Failed to instantiate flowop %s\n",
		    cmd->cmd_name);
		filebench_shutdown(1);
	}

	/* Get the filename from attribute */
	if (attr = get_attr(cmd, FSA_FILE)) {
		flowop->fo_fileset = fileset_find(*attr->attr_string);

		if ((flowop->fo_fileset == NULL)) {
			filebench_log(LOG_ERROR,
			    "define flowop: file %s not found",
			    *attr->attr_string);
			filebench_shutdown(1);
		}
	}

	/* Get the iosize of the op */
	if (attr = get_attr_integer(cmd, FSA_IOSIZE))
		flowop->fo_iosize = attr->attr_integer;
	else
		flowop->fo_iosize = integer_alloc(0);

	/* Get the working set size of the op */
	if (attr = get_attr_integer(cmd, FSA_WSS))
		flowop->fo_wss = attr->attr_integer;
	else
		flowop->fo_wss = integer_alloc(0);

	/* Random I/O? */
	if (attr = get_attr_bool(cmd, FSA_RANDOM))
		flowop->fo_random = attr->attr_integer;
	else
		flowop->fo_random = integer_alloc(0);

	/* Sync I/O? */
	if (attr = get_attr_bool(cmd, FSA_DSYNC))
		flowop->fo_dsync = attr->attr_integer;
	else
		flowop->fo_dsync = integer_alloc(0);

	/* Iterations */
	if (attr = get_attr_integer(cmd, FSA_ITERS))
		flowop->fo_iters = attr->attr_integer;
	else
		flowop->fo_iters = integer_alloc(1);


	/* Target, for wakeup etc */
	if (attr = get_attr(cmd, FSA_TARGET))
		(void) strcpy(flowop->fo_targetname, *attr->attr_string);

	/* Value */
	if (attr = get_attr_integer(cmd, FSA_VALUE))
		flowop->fo_value = attr->attr_integer;
	else
		flowop->fo_value = integer_alloc(0);

	/* FD */
	if (attr = get_attr_integer(cmd, FSA_FD))
		flowop->fo_fdnumber = *attr->attr_integer;

	/* Rotatefd? */
	if (attr = get_attr_bool(cmd, FSA_ROTATEFD))
		flowop->fo_rotatefd = attr->attr_integer;
	else
		flowop->fo_rotatefd = integer_alloc(0);

	/* SRC FD, for copies etc... */
	if (attr = get_attr_integer(cmd, FSA_SRCFD))
		flowop->fo_srcfdnumber = *attr->attr_integer;

	/* Blocking operation? */
	if (attr = get_attr_bool(cmd, FSA_BLOCKING))
		flowop->fo_blocking = attr->attr_integer;
	else
		flowop->fo_blocking = integer_alloc(0);

	/* Blocking operation? */
	if (attr = get_attr_bool(cmd, FSA_DIRECTIO))
		flowop->fo_directio = attr->attr_integer;
	else
		flowop->fo_directio = integer_alloc(0);

	/* Highwater mark */
	if (attr = get_attr_integer(cmd, FSA_HIGHWATER))
		flowop->fo_highwater = attr->attr_integer;
	else
		flowop->fo_highwater = integer_alloc(1);
}

/*
 * Calls fileset_define() to allocate a fileset with the supplied name and
 * initializes the fileset's pathname attribute, and optionally the fs_cached,
 * fs_reuse, fs_prealloc and fs_size attributes.
 *
 */
static fileset_t *
parser_fileset_define_common(cmd_t *cmd)
{
	fileset_t *fileset;
	char *name;
	attr_t *attr;
	var_string_t pathname;

	/* Get the name of the file */
	if (attr = get_attr(cmd, FSA_NAME)) {
		name = *attr->attr_string;
	} else {
		filebench_log(LOG_ERROR,
		    "define fileset: file or fileset specifies no name");
		return (NULL);
	}

	if ((fileset = fileset_define(name)) == NULL) {
		filebench_log(LOG_ERROR,
		    "define file: failed to instantiate file %s\n",
		    name);
		return (NULL);
	}

	/* Get the pathname from attribute */
	if ((attr = get_attr(cmd, FSA_PATH)) == NULL) {
		filebench_log(LOG_ERROR, "define file: no pathname specified");
		return (NULL);
	}

	/* Expand variables in pathname */
	if ((pathname = parser_list2varstring(attr->attr_param_list))
	    == NULL) {
		filebench_log(LOG_ERROR, "Cannot interpret path");
		return (NULL);
	}

	fileset->fs_path = pathname;

	/* Should we prealloc in parallel? */
	if (attr = get_attr_bool(cmd, FSA_PARALLOC)) {
		fileset->fs_paralloc = attr->attr_integer;
	} else
		fileset->fs_paralloc = integer_alloc(0);

	/* Should we reuse the existing file? */
	if (attr = get_attr_bool(cmd, FSA_REUSE)) {
		fileset->fs_reuse = attr->attr_integer;
	} else
		fileset->fs_reuse = integer_alloc(0);

	/* Should we leave in cache? */
	if (attr = get_attr_bool(cmd, FSA_CACHED)) {
		fileset->fs_cached = attr->attr_integer;
	} else
		fileset->fs_cached = integer_alloc(0);

	/* Get the mean or absolute size of the file */
	if (attr = get_attr_integer(cmd, FSA_SIZE)) {
		fileset->fs_size = attr->attr_integer;
	} else
		fileset->fs_size = integer_alloc(0);

	return (fileset);
}

/*
 * Calls parser_fileset_define_common() to allocate a fileset with
 * one entry and optionally the fs_prealloc. Sets the fs_preallocpercent,
 * fs_entries, fs_dirwidth, fs_dirgamma, and fs_sizegamma attributes
 * to appropriate values for emulating the old "fileobj" entity
 */
static void
parser_file_define(cmd_t *cmd)
{
	fileset_t *fileset;
	attr_t *attr;

	if ((fileset = parser_fileset_define_common(cmd)) == NULL) {
		filebench_log(LOG_ERROR,
		    "define file: failed to instantiate file");
		filebench_shutdown(1);
		return;
	}

	/* fileset is emulating a single file */
	fileset->fs_attrs = FILESET_IS_FILE;

	/* Set the size of the fileset to 1 */
	fileset->fs_entries = integer_alloc(1);

	/* Set the mean dir width to more than 1 */
	fileset->fs_dirwidth = integer_alloc(10);

	/* Set the dir and size gammas to 0 */
	fileset->fs_dirgamma = integer_alloc(0);
	fileset->fs_sizegamma = integer_alloc(0);

	/* if a raw device, all done */
	if (fileset_checkraw(fileset)) {
		filebench_log(LOG_VERBOSE, "File %s/%s is RAW device",
		    *fileset->fs_path, fileset->fs_name);
		return;
	}

	/* Does file need to be preallocated? */
	if (attr = get_attr_bool(cmd, FSA_PREALLOC)) {
		/* yes */
		fileset->fs_prealloc = attr->attr_integer;
		fileset->fs_preallocpercent = integer_alloc(100);
	} else {
		/* no */
		fileset->fs_prealloc = integer_alloc(0);
		fileset->fs_preallocpercent = integer_alloc(0);
	}
}

/*
 * Calls parser_fileset_define_common() to allocate a fileset with the
 * supplied name and initializes the fileset's fs_preallocpercent,
 * fs_prealloc, fs_entries, fs_dirwidth, fs_dirgamma, and fs_sizegamma
 * attributes.
 */
static void
parser_fileset_define(cmd_t *cmd)
{
	fileset_t *fileset;
	attr_t *attr;

	if ((fileset = parser_fileset_define_common(cmd)) == NULL) {
		filebench_log(LOG_ERROR,
		    "define fileset: failed to instantiate fileset");
		filebench_shutdown(1);
		return;
	}

	/* How much should we preallocate? */
	if ((attr = get_attr_integer(cmd, FSA_PREALLOC)) &&
	    attr->attr_integer) {
		fileset->fs_preallocpercent = attr->attr_integer;
	} else if (attr && !attr->attr_integer) {
		fileset->fs_preallocpercent = integer_alloc(100);
	} else {
		fileset->fs_preallocpercent = integer_alloc(0);
	}

	/* Should we preallocate? */
	if (attr = get_attr_bool(cmd, FSA_PREALLOC)) {
		fileset->fs_prealloc = attr->attr_integer;
	} else
		fileset->fs_prealloc = integer_alloc(0);

	/* Get the number of files in the fileset */
	/* if a raw device, set count to zero for now */
	if (fileset_checkraw(fileset)) {
		fileset->fs_dirwidth = integer_alloc(0);
		fileset->fs_entries = integer_alloc(0);
		fileset->fs_dirwidth = integer_alloc(0);
		fileset->fs_dirgamma = integer_alloc(1500);
		fileset->fs_sizegamma = integer_alloc(1500);
		return;
	}
 
	if (attr = get_attr_integer(cmd, FSA_ENTRIES)) {
		fileset->fs_entries = attr->attr_integer;
	} else {
		filebench_log(LOG_ERROR, "Fileset has zero entries");
		fileset->fs_entries = integer_alloc(0);
	}

	/* Get the mean dir width of the fileset */
	if (attr = get_attr_integer(cmd, FSA_DIRWIDTH)) {
		fileset->fs_dirwidth = attr->attr_integer;
	} else {
		filebench_log(LOG_ERROR, "Fileset has zero directory width");
		fileset->fs_dirwidth = integer_alloc(0);
	}

	/* Get the gamma value for dir width distributions */
	if (attr = get_attr_integer(cmd, FSA_DIRGAMMA)) {
		fileset->fs_dirgamma = attr->attr_integer;
	} else
		fileset->fs_dirgamma = integer_alloc(1500);

	/* Get the gamma value for dir width distributions */
	if (attr = get_attr_integer(cmd, FSA_FILESIZEGAMMA)) {
		fileset->fs_sizegamma = attr->attr_integer;
	} else
		fileset->fs_sizegamma = integer_alloc(1500);
}

/*
 * Creates and starts all defined procflow processes. The call to
 * procflow_init() results in creation of the requested number of
 * process instances for each previously defined procflow. The
 * child processes exec() a new instance of filebench, passing it
 * the instance number and address of the shared memory region.
 * The child processes will then create their threads and flowops.
 * The routine then unlocks the run_lock to allow all the processes'
 * threads to start and  waits for all of them to begin execution.
 * Finally, it records the start time and resets the event generation
 * system.
 */
static void
parser_proc_create(cmd_t *cmd)
{
	if (procflow_init() != 0) {
		filebench_log(LOG_ERROR, "Failed to create processes\n");
		filebench_shutdown(1);
	}

	/* Release the read lock, allowing threads to start */
	(void) pthread_rwlock_unlock(&filebench_shm->run_lock);

	/* Wait for all threads to start */
	if (procflow_allstarted() != 0) {
		filebench_log(LOG_ERROR, "Could not start run");
		return;
	}


	if (filebench_shm->shm_required &&
	    (ipc_ismcreate(filebench_shm->shm_required) < 0)) {
		filebench_log(LOG_ERROR, "Could not allocate shared memory");
		return;
	}

	filebench_shm->starttime = gethrtime();
	eventgen_reset();
}

/*
 * Calls fileset_createset() to populate all files and filesets and
 * create all associated, initially existant,  files and subdirectories.
 * If errors are encountered, calls filebench_shutdown()
 * to exit filebench.
 */
static void
parser_fileset_create(cmd_t *cmd)
{
	if (!filecreate_done) {
		filecreate_done = 1;
		if (fileset_createset(NULL) != 0) {
			filebench_log(LOG_ERROR, "Failed to create filesets");
			filebench_shutdown(1);
		}
	} else {
		filebench_log(LOG_INFO,
		    "Attempting to create fileset more than once, ignoring");
	}

}

/*
 * Shuts down all processes and their associated threads. When finished
 * it deletes interprocess shared memory and resets the event generator.
 * It does not exit the filebench program though.
 */
static void
parser_proc_shutdown(cmd_t *cmd)
{
	filebench_log(LOG_INFO, "Shutting down processes");
	filecreate_done = 0;
	procflow_shutdown();
	if (filebench_shm->shm_required)
		ipc_ismdelete();
	eventgen_reset();
}

/*
 * Ends filebench run after first destoring any interprocess
 * shared memory. The call to filebench_shutdown()
 * also causes filebench to exit.
 */
static void
parser_filebench_shutdown(cmd_t *cmd)
{
	ipc_cleanup();
	filebench_shutdown(1);
}

/*
 * Sleeps for cmd->cmd_qty seconds, one second at a time.
 */
static void
parser_sleep(cmd_t *cmd)
{
	int sleeptime;

	/* check for startup errors */
	if (filebench_shm->f_abort)
		return;

	sleeptime = cmd->cmd_qty;
	filebench_log(LOG_INFO, "Running...");
	while (sleeptime) {
		(void) sleep(1);
		sleeptime--;
		if (filebench_shm->f_abort)
			break;
	}
	filebench_log(LOG_INFO, "Run took %lld seconds...",
	    cmd->cmd_qty - sleeptime);
}

/*
 * Do a file bench run. Calls routines to create file sets, files, and
 * processes. It resets the statistics counters, then sleeps for the runtime
 * passed as an argument to it on the command line in 1 second increments.
 * When it is finished sleeping, it collects a snapshot of the statistics
 * and ends the run.
 */
static void
parser_run(cmd_t *cmd)
{
	int runtime;

	runtime = cmd->cmd_qty;
	parser_fileset_create(cmd);
	parser_proc_create(cmd);

	/* check for startup errors */
	if (filebench_shm->f_abort)
		return;

	filebench_log(LOG_INFO, "Running...");
	stats_clear();
	while (runtime) {
		(void) sleep(1);
		runtime--;
		if (filebench_shm->f_abort)
			break;
	}
	filebench_log(LOG_INFO, "Run took %lld seconds...",
	    cmd->cmd_qty - runtime);
	parser_statssnap(cmd);
	parser_proc_shutdown(cmd);
}

/*
 * Similar to parser_run, but gets the sleep time from a variable
 * whose name is supplied as an argument to the command.
 */
static void
parser_run_variable(cmd_t *cmd)
{
	vinteger_t *integer = var_ref_integer(cmd->cmd_tgt1);
	int runtime;

	if (integer == NULL) {
		filebench_log(LOG_ERROR, "Unknown variable %s",
		cmd->cmd_tgt1);
		return;
	}

	runtime = *integer;

	/* check for startup errors */
	if (filebench_shm->f_abort)
		return;

	filebench_log(LOG_INFO, "Running...");
	stats_clear();
	while (runtime) {
		(void) sleep(1);
		runtime--;
		if (filebench_shm->f_abort)
			break;
	}
	filebench_log(LOG_INFO, "Run took %lld seconds...",
	    *integer - runtime);
	parser_statssnap(cmd);
}

char *usagestr = NULL;

/*
 * Prints usage string if defined, else just a message requesting load of a
 * personality.
 */
static void
parser_help(cmd_t *cmd)
{
	int runtime;

	if (usagestr) {
		filebench_log(LOG_INFO, "%s", usagestr);
	} else {
		filebench_log(LOG_INFO,
		    "load <personality> (ls "
		    "/usr/benchmarks/filebench/workloads for list)");
	}
}

char *varstr = NULL;

/*
 * Prints the string of all var definitions, if there is one.
 */
static void
parser_printvars(cmd_t *cmd)
{
	int runtime;
	char *str, *c;

	if (varstr) {
		str = strdup(varstr);
		for (c = str; *c != '\0'; c++) {
			if ((char)*c == '$')
				*c = ' ';
		}
		filebench_log(LOG_INFO, "%s", str);
		free(str);
	}
}

/*
 * Used by the SET command to add a var and default value string to the
 * varstr string. It allocates a new, larger varstr string, copies the
 * old contents of varstr into it, then adds the new var string on the end.
 */
static void
parser_vars(cmd_t *cmd)
{
	char *string = cmd->cmd_tgt1;
	char *newvars;

	if (string == NULL)
		return;

	if (dofile)
		return;

	if (varstr == NULL) {
		newvars = malloc(strlen(string) + 2);
		*newvars = 0;
	} else {
		newvars = malloc(strlen(varstr) + strlen(string) + 2);
		(void) strcpy(newvars, varstr);
	}
	(void) strcat(newvars, string);
	(void) strcat(newvars, " ");

	if (varstr)
		free(varstr);

	varstr = newvars;
}

/*
 * Same as parser_sleep, except the sleep time is obtained from a variable
 * whose name is passed to it as an argument on the command line.
 */
static void
parser_sleep_variable(cmd_t *cmd)
{
	vinteger_t *integer = var_ref_integer(cmd->cmd_tgt1);
	int sleeptime;

	if (integer == NULL) {
		filebench_log(LOG_ERROR, "Unknown variable %s",
		cmd->cmd_tgt1);
		return;
	}

	sleeptime = *integer;

	/* check for startup errors */
	if (filebench_shm->f_abort)
		return;

	filebench_log(LOG_INFO, "Running...");
	while (sleeptime) {
		(void) sleep(1);
		sleeptime--;
		if (filebench_shm->f_abort)
			break;
	}
	filebench_log(LOG_INFO, "Run took %lld seconds...",
	    *integer - sleeptime);
}

/*
 * Parser log prints the values of a list of variables to the log file.
 * The list of variables is placed on the command line, separated
 * by comas and the entire list is enclosed in quotes.
 * For example, if $dir contains "/export/home/tmp" and $filesize = 1048576,
 * then typing: log "$dir, $filesize" prints: log /export/home/tmp, 1048576
 */
static void
parser_log(cmd_t *cmd)
{
	char *string;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	filebench_log(LOG_VERBOSE, "log %s", string);
	filebench_log(LOG_LOG, "%s", string);
}

/*
 * Implements the stats directory command. changes the directory for
 * dumping statistics to supplied directory path. For example:
 * 	stats directory /tmp
 * changes the stats directory to "/tmp".
 */
static void
parser_directory(cmd_t *cmd)
{
	char newdir[MAXPATHLEN];
	char *dir;

	if ((dir = parser_list2string(cmd->cmd_param_list)) == NULL) {
		filebench_log(LOG_ERROR, "Cannot interpret directory");
		return;
	}

	*newdir = 0;
	/* Change dir relative to cwd if path not fully qualified */
	if (*dir != '/') {
		(void) strcat(newdir, cwd);
		(void) strcat(newdir, "/");
	}
	(void) strcat(newdir, dir);
	(void) mkdir(newdir, 0755);
	filebench_log(LOG_VERBOSE, "Change dir to %s", newdir);
	chdir(newdir);
	free(dir);
}

#define	PIPE_PARENT 1
#define	PIPE_CHILD  0

/*
 * Runs the quoted unix command as a background process. Intended for
 * running statistics gathering utilities such as mpstat while the filebench
 * workload is running. Also records the pid's of the background processes
 * so that parser_statssnap() can terminate them when the run completes.
 */
static void
parser_statscmd(cmd_t *cmd)
{
	char *string;
	pid_t pid;
	pidlist_t *pidlistent;
	int pipe_fd[2];
	int newstdout;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	if ((pipe(pipe_fd)) < 0) {
		filebench_log(LOG_ERROR, "statscmd pipe failed");
		return;
	}

#ifdef HAVE_FORK1
	if ((pid = fork1()) < 0) {
		filebench_log(LOG_ERROR, "statscmd fork failed");
		return;
	}
#elif HAVE_FORK
	if ((pid = fork()) < 0) {
		filebench_log(LOG_ERROR, "statscmd fork failed");
		return;
	}
#else
	Crash! - Need code to deal with no fork1!
#endif /* HAVE_FORK1 */

	if (pid == 0) {

		setsid();

		filebench_log(LOG_VERBOSE,
		    "Backgrounding %s", string);
		/*
		 * Child
		 * - close stdout
		 * - dup to create new stdout
		 * - close pipe fds
		 */
		(void) close(1);

		if ((newstdout = dup(pipe_fd[PIPE_CHILD])) < 0) {
			filebench_log(LOG_ERROR,
			    "statscmd dup failed: %s",
			    strerror(errno));
		}

		(void) close(pipe_fd[PIPE_PARENT]);
		(void) close(pipe_fd[PIPE_CHILD]);

		if (system(string) < 0) {
			filebench_log(LOG_ERROR,
			    "statscmd exec failed: %s",
			    strerror(errno));
		}
		/* Failed! */
		exit(1);

	} else {

		/* Record pid in pidlist for subsequent reaping by stats snap */
		if ((pidlistent = (pidlist_t *)malloc(sizeof (pidlist_t)))
		    == NULL) {
			filebench_log(LOG_ERROR, "pidlistent malloc failed");
			return;
		}

		pidlistent->pl_pid = pid;
		pidlistent->pl_fd = pipe_fd[PIPE_PARENT];
		(void) close(pipe_fd[PIPE_CHILD]);

		/* Add fileobj to global list */
		if (pidlist == NULL) {
			pidlist = pidlistent;
			pidlistent->pl_next = NULL;
		} else {
			pidlistent->pl_next = pidlist;
			pidlist = pidlistent;
		}
	}
}

/*
 * Launches a shell to run the unix command supplied in the argument.
 * The command should be enclosed in quotes, as in:
 * 	system "rm xyz"
 * which would run the "rm" utility to delete the file "xyz".
 */
static void
parser_system(cmd_t *cmd)
{
	char *string;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	filebench_log(LOG_VERBOSE,
	    "Running '%s'", string);

	if (system(string) < 0) {
		filebench_log(LOG_ERROR,
		    "system exec failed: %s",
		    strerror(errno));
	}
	free(string);
}

/*
 * Echos string supplied with command to the log.
 */
static void
parser_echo(cmd_t *cmd)
{
	char *string;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	filebench_log(LOG_INFO, "%s", string);
}


/*
 * Adds the string supplied as the argument to the usage command
 * to the end of the string printed by the help command.
 */
static void
parser_usage(cmd_t *cmd)
{
	char *string;
	char *newusage;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	if (dofile)
		return;

	if (usagestr == NULL) {
		newusage = malloc(strlen(string) + 2);
		*newusage = 0;
	} else {
		newusage = malloc(strlen(usagestr) + strlen(string) + 2);
		(void) strcpy(newusage, usagestr);
	}
	(void) strcat(newusage, "\n");
	(void) strcat(newusage, string);

	if (usagestr)
		free(usagestr);

	usagestr = newusage;

	filebench_log(LOG_INFO, "%s", string);
}

/*
 * Updates the global dump filename with the filename supplied
 * as the command's argument. Then dumps the statistics of each
 * worker flowop into the dump file, followed by a summary of
 * overall totals.
 */
static void
parser_statsdump(cmd_t *cmd)
{
	char *string;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	filebench_log(LOG_VERBOSE,
	    "Stats dump to file '%s'", string);

	stats_dump(string);

	free(string);
}

/*
 * Same as parser_statsdump, but in xml format.
 */
static void
parser_statsxmldump(cmd_t *cmd)
{
	char *string;

	if (cmd->cmd_param_list == NULL)
		return;

	string = parser_list2string(cmd->cmd_param_list);

	if (string == NULL)
		return;

	filebench_log(LOG_VERBOSE,
	    "Stats dump to file '%s'", string);

	stats_xmldump(string);

	free(string);
}

/*
 * Kills off background statistics collection processes, then takes a snapshot
 * of the filebench run's collected statistics using stats_snap() from
 * stats.c.
 */
static void
parser_statssnap(cmd_t *cmd)
{
	pidlist_t *pidlistent;
	int stat;
	pid_t pid;

	for (pidlistent = pidlist; pidlistent != NULL;
	    pidlistent = pidlistent->pl_next) {
		filebench_log(LOG_VERBOSE, "Killing session %d for pid %d",
		    getsid(pidlistent->pl_pid),
		    pidlistent->pl_pid);
		if (pidlistent->pl_fd)
			(void) close(pidlistent->pl_fd);
#ifdef HAVE_SIGSEND
		sigsend(P_SID, getsid(pidlistent->pl_pid), SIGTERM);
#else
		(void) kill(-1, SIGTERM);
#endif

		/* Close pipe */
		if (pidlistent->pl_fd)
			(void) close(pidlistent->pl_fd);

		/* Wait for cmd and all its children */
		while ((pid = waitpid(pidlistent->pl_pid * -1, &stat, 0)) > 0)
			filebench_log(LOG_DEBUG_IMPL,
			"Waited for pid %lld", pid);
	}

	for (pidlistent = pidlist; pidlistent != NULL;
	    pidlistent = pidlistent->pl_next) {
		free(pidlistent);
	}

	pidlist = NULL;
	stats_snap();
}

/*
 * Shutdown filebench.
 */
static void
parser_abort(int arg)
{
	(void) sigignore(SIGINT);
	filebench_log(LOG_INFO, "Aborting...");
	filebench_shutdown(1);
}

/*
 * alloc_cmd() allocates the required resources for a cmd_t. On failure, a
 * filebench_log is issued and NULL is returned.
 */
static cmd_t *
alloc_cmd(void)
{
	cmd_t *cmd;

	if ((cmd = malloc(sizeof (cmd_t))) == NULL) {
		filebench_log(LOG_ERROR, "Alloc cmd failed");
		return (NULL);
	}

	(void) memset(cmd, 0, sizeof (cmd_t));

	return (cmd);
}

/*
 * Frees the resources of a cmd_t and then the cmd_t "cmd" itself.
 */
static void
free_cmd(cmd_t *cmd)
{
	free((void *)cmd->cmd_tgt1);
	free((void *)cmd->cmd_tgt2);
	free(cmd);
}

/*
 * Allocates an attr_t structure and zeros it. Returns NULL on failure, or
 * a pointer to the attr_t.
 */
static attr_t *
alloc_attr()
{
	attr_t *attr;

	if ((attr = malloc(sizeof (attr_t))) == NULL) {
		return (NULL);
	}

	(void) memset(attr, 0, sizeof (attr_t));
	return (attr);
}

/*
 * Searches the attribute list for the command for the named attribute type.
 * The attribute list is created by the parser from the list of attributes
 * supplied with certain commands, such as the define and flowop commands.
 * Returns a pointer to the attribute structure if the named attribute is
 * found, otherwise returns NULL. If the attribute includes a parameter list,
 * the list is converted to a string and stored in the attr_string field of
 * the returned attr_t struct.
 */
static attr_t *
get_attr(cmd_t *cmd, int64_t name)
{
	attr_t *attr;
	attr_t *rtn = NULL;
	char *string;

	for (attr = cmd->cmd_attr_list; attr != NULL;
	    attr = attr->attr_next) {
		filebench_log(LOG_DEBUG_IMPL,
		    "attr %d = %d %llx?",
		    attr->attr_name,
		    name,
		    attr->attr_integer);

		if (attr->attr_name == name)
			rtn = attr;
	}

	if (rtn == NULL)
		return (NULL);

	if (rtn->attr_param_list) {
		filebench_log(LOG_DEBUG_SCRIPT, "attr is param list");
		string = parser_list2string(rtn->attr_param_list);
		if (string != NULL) {
			rtn->attr_string = string_alloc(string);
			filebench_log(LOG_DEBUG_SCRIPT,
			    "attr string %s", string);
		}
	}

	return (rtn);
}

/*
 * Similar to get_attr, but converts the parameter string supplied with the
 * named attribute to an integer and stores the integer in the attr_integer
 * portion of the returned attr_t struct.
 */
static attr_t *
get_attr_integer(cmd_t *cmd, int64_t name)
{
	attr_t *attr;
	attr_t *rtn = NULL;

	for (attr = cmd->cmd_attr_list; attr != NULL;
	    attr = attr->attr_next) {
		if (attr->attr_name == name)
			rtn = attr;
	}

	if (rtn == NULL)
		return (NULL);

	if (rtn->attr_param_list) {
		rtn->attr_integer = parser_list2integer(rtn->attr_param_list);
	}

	return (rtn);
}

/*
 * Similar to get_attr, but converts the parameter string supplied with the
 * named attribute to an integer and stores the integer in the attr_integer
 * portion of the returned attr_t struct. If no parameter string is supplied
 * then it defaults to TRUE (1).
 */
static attr_t *
get_attr_bool(cmd_t *cmd, int64_t name)
{
	attr_t *attr;
	attr_t *rtn = NULL;

	for (attr = cmd->cmd_attr_list; attr != NULL;
	    attr = attr->attr_next) {
		if (attr->attr_name == name)
			rtn = attr;
	}

	if (rtn == NULL)
		return (NULL);

	if (rtn->attr_param_list) {
		rtn->attr_integer = parser_list2integer(rtn->attr_param_list);
	} else if (rtn->attr_integer == 0) {
		rtn->attr_integer = integer_alloc(1);
	}

	return (rtn);
}

/*
 * Allocates memory for a list_t structure, initializes it to zero, and
 * returns a pointer to it. On failure, returns NULL.
 */
static list_t *
alloc_list()
{
	list_t *list;

	if ((list = malloc(sizeof (list_t))) == NULL) {
		return (NULL);
	}

	(void) memset(list, 0, sizeof (list_t));
	return (list);
}


#define	USAGE1	\
"Usage:\n" \
"%s: interpret f script and generate file workload\n" \
"Options:\n" \
"   [-h] Display verbose help\n" \
"   [-p] Disable opening /proc to set uacct to enable truss\n"

#define	PARSER_CMDS \
"create [files|filesets|processes]\n" \
"stats [clear|snap]\n" \
"stats command \"shell command $var1,$var2...\"\n" \
"stats directory <directory>\n" \
"sleep <sleep-value>\n" \
"quit\n\n" \
"Variables:\n" \
"set $var = value\n" \
"    $var   - regular variables\n" \
"    ${var} - internal special variables\n" \
"    $(var) - environment variables\n\n"

#define	PARSER_EXAMPLE \
"Example:\n\n" \
"#!/usr/bin/filebench -f\n" \
"\n" \
"define file name=bigfile,path=bigfile,size=1g,prealloc,reuse\n" \
"define process name=randomizer\n" \
"{\n" \
"  thread random-thread procname=randomizer\n"	\
"  {\n" \
"    flowop read name=random-read,filename=bigfile,iosize=16k,random\n" \
"  }\n" \
"}\n" \
"create files\n" \
"create processes\n" \
"stats clear\n" \
"sleep 30\n" \
"stats snap\n"

/*
 * usage() display brief or verbose help for the filebench(1) command.
 */
static void
usage(int help)
{
	if (help >= 1)
		(void) fprintf(stderr, USAGE1, cmdname);
	if (help >= 2) {

		(void) fprintf(stderr,
		    "\n'f' language definition:\n\n");
		fileset_usage();
		procflow_usage();
		threadflow_usage();
		flowoplib_usage();
		eventgen_usage();
		(void) fprintf(stderr, PARSER_CMDS);
		(void) fprintf(stderr, PARSER_EXAMPLE);
	}
	exit(E_USAGE);
}

int
yywrap()
{
	char buf[1024];

	if (parentscript) {
		yyin = parentscript;
		yy_switchfilescript(yyin);
		parentscript = NULL;
		return (0);
	} else
		return (1);
}


/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 221 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


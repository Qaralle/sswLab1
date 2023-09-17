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
     IDENT = 258,
     CONST = 259,
     ARRAY = 260,
     OF = 261,
     AP = 262,
     SOP = 263,
     SCP = 264,
     OP = 265,
     CP = 266,
     MINUS = 267,
     NOT = 268,
     BIN_EQUALS = 269,
     BIN_GREATER = 270,
     BIN_LESS = 271,
     BIN_MOD = 272,
     BIN_DIV = 273,
     BIN_MUL = 274,
     BIN_PLUS = 275,
     BIN_OR = 276,
     BIN_AND = 277,
     ASSIGN = 278,
     TRUE = 279,
     FALSE = 280,
     STR = 281,
     CHAR = 282,
     HEX = 283,
     BIN = 284,
     DEC = 285,
     METHOD = 286,
     WHILE = 287,
     REPEAT = 288,
     DO = 289,
     BREAK = 290,
     UNTIL = 291,
     IF = 292,
     THEN = 293,
     ELSE = 294,
     COLON = 295,
     SEMICOLON = 296,
     COMMA = 297,
     VAR = 298,
     BEGIN = 299,
     END = 300,
     TYPE = 301,
     ERROR = 302
   };
#endif
/* Tokens.  */
#define IDENT 258
#define CONST 259
#define ARRAY 260
#define OF 261
#define AP 262
#define SOP 263
#define SCP 264
#define OP 265
#define CP 266
#define MINUS 267
#define NOT 268
#define BIN_EQUALS 269
#define BIN_GREATER 270
#define BIN_LESS 271
#define BIN_MOD 272
#define BIN_DIV 273
#define BIN_MUL 274
#define BIN_PLUS 275
#define BIN_OR 276
#define BIN_AND 277
#define ASSIGN 278
#define TRUE 279
#define FALSE 280
#define STR 281
#define CHAR 282
#define HEX 283
#define BIN 284
#define DEC 285
#define METHOD 286
#define WHILE 287
#define REPEAT 288
#define DO 289
#define BREAK 290
#define UNTIL 291
#define IF 292
#define THEN 293
#define ELSE 294
#define COLON 295
#define SEMICOLON 296
#define COMMA 297
#define VAR 298
#define BEGIN 299
#define END 300
#define TYPE 301
#define ERROR 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "grammer.y"
{
  struct ast_node* node;
}
/* Line 1529 of yacc.c.  */
#line 147 "grammer.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


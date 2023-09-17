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




/* Copy the first part of user declarations.  */
#line 1 "grammer.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include <stdbool.h>
  #include <getopt.h>
  #include "ast.h"

  int yylex(void);
  void yyerror( char const* s );


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 12 "grammer.y"
{
  struct ast_node* node;
}
/* Line 193 of yacc.c.  */
#line 205 "grammer.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 218 "grammer.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    15,    17,    20,    24,
      25,    28,    31,    36,    40,    42,    47,    54,    58,    60,
      62,    66,    68,    70,    72,    74,    76,    81,    83,    85,
      87,    89,    91,    93,    98,   105,   109,   114,   115,   118,
     123,   129,   135,   138,   141,   146,   148,   150,   152,   154,
     156,   158,   160,   163,   166,   168,   172,   176,   180,   184,
     188,   193,   198,   202,   206,   210,   214,   218,   223,   224,
     226,   230,   232,   237,   239,   241,   243,   245,   247,   249,
     251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    -1,    49,    50,    -1,    31,    55,    51,
      -1,    31,    55,    41,    -1,    64,    -1,    43,    64,    -1,
      43,    52,    64,    -1,    -1,    52,    53,    -1,    54,    41,
      -1,    54,    40,    58,    41,    -1,     3,    42,    54,    -1,
       3,    -1,     3,    10,    56,    11,    -1,     3,    10,    56,
      11,    41,    58,    -1,    57,    42,    56,    -1,    57,    -1,
       3,    -1,     3,    40,    58,    -1,    59,    -1,    60,    -1,
      61,    -1,    46,    -1,     3,    -1,     5,     7,     6,    58,
      -1,    63,    -1,    64,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,    37,    71,    38,    62,    -1,    37,    71,
      38,    62,    39,    62,    -1,    44,    45,    41,    -1,    44,
      65,    45,    41,    -1,    -1,    65,    62,    -1,    32,    71,
      34,    62,    -1,    33,    62,    32,    71,    41,    -1,    33,
      62,    36,    71,    41,    -1,    35,    41,    -1,    71,    41,
      -1,    71,    40,    14,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    78,    -1,    79,    -1,    80,    -1,
      12,    71,    -1,    13,    71,    -1,    70,    -1,    71,    20,
      71,    -1,    71,    12,    71,    -1,    71,    19,    71,    -1,
      71,    18,    71,    -1,    71,    17,    71,    -1,    71,    14,
      14,    71,    -1,    71,    13,    14,    71,    -1,    71,    16,
      71,    -1,    71,    15,    71,    -1,    71,    22,    71,    -1,
      71,    21,    71,    -1,    10,    71,    11,    -1,     3,    10,
      76,    11,    -1,    -1,    77,    -1,    71,    42,    77,    -1,
      71,    -1,    71,     8,    77,     9,    -1,     3,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    76,    79,    80,    83,    84,    85,    88,
      89,    92,    93,    96,    97,   100,   101,   104,   105,   108,
     109,   112,   113,   114,   118,   122,   126,   129,   130,   131,
     132,   133,   134,   137,   138,   141,   142,   145,   146,   150,
     153,   154,   157,   160,   163,   166,   167,   168,   169,   170,
     171,   172,   175,   176,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   193,   196,   199,   200,
     203,   204,   207,   210,   213,   214,   215,   216,   217,   218,
     219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "CONST", "ARRAY", "OF", "AP",
  "SOP", "SCP", "OP", "CP", "MINUS", "NOT", "BIN_EQUALS", "BIN_GREATER",
  "BIN_LESS", "BIN_MOD", "BIN_DIV", "BIN_MUL", "BIN_PLUS", "BIN_OR",
  "BIN_AND", "ASSIGN", "TRUE", "FALSE", "STR", "CHAR", "HEX", "BIN", "DEC",
  "METHOD", "WHILE", "REPEAT", "DO", "BREAK", "UNTIL", "IF", "THEN",
  "ELSE", "COLON", "SEMICOLON", "COMMA", "VAR", "BEGIN", "END", "TYPE",
  "ERROR", "$accept", "source", "source_item", "body", "body_var",
  "body_item", "list_var", "function_signature", "list_arg",
  "list_arg_item", "type_ref", "builtin", "custom", "array", "statement",
  "if", "block", "block_item", "while", "do", "break", "expression",
  "assignment", "expr", "unary", "binary", "braces", "call", "call_list",
  "list_expr", "indexer", "place", "literal", 0
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    51,    51,    51,    52,
      52,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    58,    59,    60,    61,    62,    62,    62,
      62,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    69,    70,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    74,    75,    76,    76,
      77,    77,    78,    79,    80,    80,    80,    80,    80,    80,
      80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     3,     1,     2,     3,     0,
       2,     2,     4,     3,     1,     4,     6,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     4,     6,     3,     4,     0,     2,     4,
       5,     5,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     3,     3,     3,     3,     3,
       4,     4,     3,     3,     3,     3,     3,     4,     0,     1,
       3,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     3,     0,     0,     0,     5,     9,
      37,     4,     6,    19,     0,    18,     0,     7,     0,     0,
       0,    15,     0,    14,    10,     0,     8,    35,    73,     0,
       0,     0,    74,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,    38,    27,    28,    29,    30,    31,
      32,    54,     0,    45,    46,    47,    48,    49,    50,    51,
      25,     0,    24,    20,    21,    22,    23,     0,    17,     0,
       0,    11,    68,     0,    52,    53,     0,     0,    42,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    16,    13,     0,    71,
       0,    69,    66,     0,     0,     0,     0,     0,    56,     0,
       0,    63,    62,    59,    58,    57,    55,    65,    64,     0,
       0,    12,     0,    67,    39,     0,     0,    33,    72,    61,
      60,    44,    26,    70,    40,    41,     0,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     4,    11,    16,    24,    25,     6,    14,    15,
      63,    64,    65,    66,    44,    45,    46,    19,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,   100,   101,
      57,    58,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -76
static const yytype_int16 yypact[] =
{
     -76,    20,   -76,     7,   -76,    26,   -20,    42,   -76,    -5,
       3,   -76,   -76,    12,    45,    11,    -1,   -76,    18,     5,
       0,    19,    42,    25,   -76,   -13,   -76,   -76,    51,   262,
     262,   262,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   262,
      87,    21,   262,    37,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   135,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,    70,   -76,   -76,   -76,   -76,   -76,     0,   -76,    76,
       0,   -76,   262,   182,   241,   241,   197,   -25,   -76,   226,
     -76,   262,   262,    66,    67,   262,   262,   262,   262,   262,
     262,   262,   262,    68,   -76,    77,   -76,   -76,    43,   120,
      74,   -76,   -76,    87,   262,   262,    87,    80,   241,   262,
     262,    36,    36,    36,    36,    36,    36,     1,     1,   262,
       0,   -76,   262,   -76,   -76,   151,   166,    47,   -76,    36,
      36,    36,   -76,   -76,   -76,   -76,    87,   -76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -76,   -76,   -76,   -76,   -76,   -76,    22,   -76,    72,   -76,
     -66,   -76,   -76,   -76,   -40,   -76,    10,   -76,   -76,   -76,
     -76,   -76,   -76,   -17,   -76,   -76,   -76,   -76,   -76,   -75,
     -76,   -76,   -76
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      77,    96,    23,    60,    98,    61,   107,   104,    28,    81,
       5,   105,    73,    74,    75,    29,    12,    30,    31,    17,
       2,     8,    76,     9,    10,    79,    26,    70,    71,    32,
      33,    34,    35,    36,    37,    38,     7,    39,    40,    10,
      41,    93,    42,    10,    81,    13,    62,   133,    18,    10,
      43,     3,    20,    22,   132,    99,    21,    91,    92,    27,
      67,    72,    78,   124,    99,   108,   127,    69,   111,   112,
     113,   114,   115,   116,   117,   118,    93,    95,    80,    23,
     109,   110,   119,   120,   121,   123,   136,   125,   126,   128,
      28,    97,   129,   130,    68,     0,   137,    29,     0,    30,
      31,     0,   131,     0,     0,    99,     0,     0,     0,     0,
       0,    32,    33,    34,    35,    36,    37,    38,     0,    39,
      40,     0,    41,     0,    42,     0,     0,     0,    81,     0,
       0,    10,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    81,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,     0,    81,
      93,     0,   122,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    81,    93,    94,     0,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,     0,
      81,    93,   134,   102,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    81,    93,   135,     0,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,     0,    81,     0,     0,    93,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    81,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,   106,    28,    93,     0,     0,     0,
       0,     0,    29,     0,    30,    31,     0,     0,     0,     0,
       0,    93,     0,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38
};

static const yytype_int16 yycheck[] =
{
      40,    67,     3,     3,    70,     5,    81,    32,     3,     8,
       3,    36,    29,    30,    31,    10,     6,    12,    13,     9,
       0,    41,    39,    43,    44,    42,    16,    40,    41,    24,
      25,    26,    27,    28,    29,    30,    10,    32,    33,    44,
      35,    40,    37,    44,     8,     3,    46,   122,    45,    44,
      45,    31,    40,    42,   120,    72,    11,    21,    22,    41,
      41,    10,    41,   103,    81,    82,   106,    42,    85,    86,
      87,    88,    89,    90,    91,    92,    40,     7,    41,     3,
      14,    14,    14,     6,    41,    11,    39,   104,   105,     9,
       3,    69,   109,   110,    22,    -1,   136,    10,    -1,    12,
      13,    -1,   119,    -1,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    -1,    37,    -1,    -1,    -1,     8,    -1,
      -1,    44,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     8,    -1,    -1,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    -1,     8,
      40,    -1,    42,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,     8,    40,    41,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
       8,    40,    41,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     8,    40,    41,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    -1,     8,    -1,    -1,    40,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    38,     3,    40,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,     0,    31,    50,     3,    55,    10,    41,    43,
      44,    51,    64,     3,    56,    57,    52,    64,    45,    65,
      40,    11,    42,     3,    53,    54,    64,    41,     3,    10,
      12,    13,    24,    25,    26,    27,    28,    29,    30,    32,
      33,    35,    37,    45,    62,    63,    64,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    78,    79,    80,
       3,     5,    46,    58,    59,    60,    61,    41,    56,    42,
      40,    41,    10,    71,    71,    71,    71,    62,    41,    71,
      41,     8,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    40,    41,     7,    58,    54,    58,    71,
      76,    77,    11,    34,    32,    36,    38,    77,    71,    14,
      14,    71,    71,    71,    71,    71,    71,    71,    71,    14,
       6,    41,    42,    11,    62,    71,    71,    62,     9,    71,
      71,    71,    58,    77,    41,    41,    39,    62
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
#line 75 "grammer.y"
    {(yyval.node) = NULL;}
    break;

  case 3:
#line 76 "grammer.y"
    {(yyval.node) = make_source((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));}
    break;

  case 4:
#line 79 "grammer.y"
    {(yyval.node) = make_source_item((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 5:
#line 80 "grammer.y"
    {(yyval.node) = make_source_item((yyvsp[(2) - (3)].node), NULL);}
    break;

  case 6:
#line 83 "grammer.y"
    {(yyval.node) = make_body((yyvsp[(1) - (1)].node), NULL);}
    break;

  case 7:
#line 84 "grammer.y"
    {(yyval.node) = make_body((yyvsp[(2) - (2)].node), NULL);}
    break;

  case 8:
#line 85 "grammer.y"
    {(yyval.node) = make_body((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 9:
#line 88 "grammer.y"
    {(yyval.node) = NULL;}
    break;

  case 10:
#line 89 "grammer.y"
    {(yyval.node) = make_common_node("body_var", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));}
    break;

  case 11:
#line 92 "grammer.y"
    {(yyval.node) = make_common_node("body_item", (yyvsp[(1) - (2)].node), NULL);}
    break;

  case 12:
#line 93 "grammer.y"
    {(yyval.node) = make_common_node("body_item", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));}
    break;

  case 13:
#line 96 "grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 14:
#line 97 "grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 15:
#line 100 "grammer.y"
    {(yyval.node) = make_function_signature((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), NULL);}
    break;

  case 16:
#line 101 "grammer.y"
    {(yyval.node) = make_function_signature((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));}
    break;

  case 17:
#line 104 "grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 18:
#line 105 "grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 19:
#line 108 "grammer.y"
    {(yyval.node) = make_common_node("list_item", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 20:
#line 109 "grammer.y"
    {(yyval.node) = make_common_node("list_item", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 21:
#line 112 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 22:
#line 113 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 23:
#line 114 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 24:
#line 118 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 25:
#line 122 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 26:
#line 126 "grammer.y"
    {(yyval.node) = make_common_node("array", (yyvsp[(2) - (4)].node)->size, (yyvsp[(4) - (4)].node));}
    break;

  case 27:
#line 129 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 28:
#line 130 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 29:
#line 131 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 30:
#line 132 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 31:
#line 133 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 32:
#line 134 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 33:
#line 137 "grammer.y"
    {(yyval.node) = make_branch_node((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node), NULL);}
    break;

  case 34:
#line 138 "grammer.y"
    {(yyval.node) = make_branch_node((yyvsp[(2) - (6)].node), (yyvsp[(4) - (6)].node), (yyvsp[(6) - (6)].node));}
    break;

  case 35:
#line 141 "grammer.y"
    {(yyval.node) = make_block(NULL);}
    break;

  case 36:
#line 142 "grammer.y"
    {(yyval.node) = make_block((yyvsp[(2) - (4)].node));}
    break;

  case 37:
#line 145 "grammer.y"
    {(yyval.node) = NULL;}
    break;

  case 38:
#line 146 "grammer.y"
    {(yyval.node) = make_common_node("block_item", (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));}
    break;

  case 39:
#line 150 "grammer.y"
    {(yyval.node) = make_loop_node("while", (yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));}
    break;

  case 40:
#line 153 "grammer.y"
    {(yyval.node) = make_loop_node("do-while", (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));}
    break;

  case 41:
#line 154 "grammer.y"
    {(yyval.node) = make_loop_node("do-until", (yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));}
    break;

  case 42:
#line 157 "grammer.y"
    {(yyval.node) = make_common_node("break", NULL, NULL);}
    break;

  case 43:
#line 160 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (2)].node);}
    break;

  case 44:
#line 163 "grammer.y"
    {(yyval.node) = make_common_node("assigment", (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));}
    break;

  case 45:
#line 166 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].oper);}
    break;

  case 46:
#line 167 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].oper);}
    break;

  case 47:
#line 168 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 48:
#line 169 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 49:
#line 170 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 50:
#line 171 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 51:
#line 172 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 52:
#line 175 "grammer.y"
    {(yyval.oper) = make_uexpr_node("MINUS", (yyvsp[(2) - (2)].node));}
    break;

  case 53:
#line 176 "grammer.y"
    {(yyval.oper) = make_uexpr_node("NOT", (yyvsp[(2) - (2)].node),);}
    break;

  case 54:
#line 179 "grammer.y"
    {(yyval.oper) = (yyvsp[(1) - (1)].node);}
    break;

  case 55:
#line 180 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_PLUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 56:
#line 181 "grammer.y"
    {(yyval.oper) = make_bexpr_node("MINUS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 57:
#line 182 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_MUL", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 58:
#line 183 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_DIV", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 59:
#line 184 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_MOD", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 60:
#line 185 "grammer.y"
    {(yyval.oper) = make_bexpr_node("EQUALITY", (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));}
    break;

  case 61:
#line 186 "grammer.y"
    {(yyval.oper) = make_bexpr_node("NOTEQUAL", (yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));}
    break;

  case 62:
#line 187 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_LESS", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 63:
#line 188 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_GREATER", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 64:
#line 189 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_AND", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 65:
#line 190 "grammer.y"
    {(yyval.oper) = make_bexpr_node("BIN_OR", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 66:
#line 193 "grammer.y"
    {(yyval.node) = make_uexpr_node(BRACES, (yyvsp[(2) - (3)].node));}
    break;

  case 67:
#line 196 "grammer.y"
    {(yyval.node) = make_call_node((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));}
    break;

  case 68:
#line 199 "grammer.y"
    {(yyval.node) = NULL;}
    break;

  case 69:
#line 200 "grammer.y"
    {(yyval.node) = make_common_node("list", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 70:
#line 203 "grammer.y"
    {(yyval.node) = make_common_node("expr", (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));}
    break;

  case 71:
#line 204 "grammer.y"
    {(yyval.node) = make_common_node("expr", (yyvsp[(1) - (1)].node), NULL);}
    break;

  case 72:
#line 207 "grammer.y"
    {(yyval.node) = make_common_node("indexer", (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));}
    break;

  case 73:
#line 210 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 74:
#line 213 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 75:
#line 214 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 76:
#line 215 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 77:
#line 216 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 78:
#line 217 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 79:
#line 218 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 80:
#line 219 "grammer.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;


/* Line 1267 of yacc.c.  */
#line 1971 "grammer.tab.c"
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


#line 221 "grammer.y"

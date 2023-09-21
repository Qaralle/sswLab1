#ifndef _AST_H_
#define _AST_H_

#include <stdbool.h>

#define MAXIMUM_IDENTIFIER_LENGTH 256

enum ast_node_type {
    EXPRESSION,
    SOURCE,
    SOURCE_ITEM,
    BODY,
    FUNCTION_SIGNATURE,
    BRANCH,
    BLOCK,
    LOOP,
    CALL,
    COMMON,
    TYPE_N,
    VALUE,
    IDENTIFIER
};


static const char *ant_names[] = {
        [EXPRESSION] = "expression",
        [SOURCE] = "source",
        [SOURCE_ITEM] = "source_item",
        [BODY] = "body",
        [FUNCTION_SIGNATURE] = "function_signature",
        [BRANCH] = "branch",
        [BLOCK] = "block",
        [LOOP] = "loop",
        [CALL] = "call",
        [COMMON] = "common-node",
        [TYPE_N] = "type",
        [VALUE] = "value",
        [IDENTIFIER] = "ident"
};

struct ast_node;

struct ast_expression {
    char oper_name[MAXIMUM_IDENTIFIER_LENGTH];
    struct ast_node *left;
    struct ast_node *right;
};

struct ast_common {
    char node_name[MAXIMUM_IDENTIFIER_LENGTH];
    struct ast_node *left;
    struct ast_node *right;
};

struct ast_call {
    struct ast_node *ident;
    struct ast_node *call_list;
};

struct ast_loop {
    char loop_type[MAXIMUM_IDENTIFIER_LENGTH];
    struct ast_node *statement;
    struct ast_node *expression;
};

struct ast_block {
    struct ast_node *block_items;
};

struct ast_branch {
    struct ast_node *if_expr;
    struct ast_node *if_statement;
    struct ast_node *else_statement;
};

struct ast_function_signature {
    struct ast_node *ident;
    struct ast_node *args;
    struct ast_node *type_ref;
};

struct ast_body {
    struct ast_node *block;
    struct ast_node *last_block;
};

struct ast_source_item {
    struct ast_node *signature;
    struct ast_node *body;
};

struct ast_source {
    struct ast_node *source;
    struct ast_node *source_item;
};

struct ast_value {
    char type_name[MAXIMUM_IDENTIFIER_LENGTH];
    char value[MAXIMUM_IDENTIFIER_LENGTH];
};

struct ast_type {
    char type_name[MAXIMUM_IDENTIFIER_LENGTH];
};

struct ast_identifier {
    char name[MAXIMUM_IDENTIFIER_LENGTH];
};

struct ast_node {
    enum ast_node_type type;
    union {
        struct ast_expression ast_expression;
        struct ast_source ast_source;
        struct ast_source_item ast_source_item;
        struct ast_body ast_body;
        struct ast_function_signature ast_function_signature;
        struct ast_branch ast_branch;
        struct ast_block ast_block;
        struct ast_loop ast_loop;
        struct ast_call ast_call;
        struct ast_common ast_common;
        struct ast_type ast_type;
        struct ast_value ast_value;
        struct ast_identifier ast_identifier;
    };
};

struct ast_node *make_common_node(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_expr_node(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_call_node(struct ast_node *, struct ast_node *);

struct ast_node *make_loop_node(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_branch_node(struct ast_node *, struct ast_node *, struct ast_node *);

struct ast_node *make_block(struct ast_node *);

struct ast_node *make_function_signature(struct ast_node *, struct ast_node *, struct ast_node *);

struct ast_node *make_body(struct ast_node *, struct ast_node *);

struct ast_node *make_source_item(struct ast_node *, struct ast_node *);

struct ast_node *make_source(struct ast_node *, struct ast_node *);

struct ast_node *make_value_node(char *, char *);

struct ast_node *make_type_node(char *);

struct ast_node *make_ident_node(char *);

void free_ast(struct ast_node *);

void print_ast(struct ast_node *);

#endif // _AST_H_
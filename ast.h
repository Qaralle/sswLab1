#ifndef _AST_H_
#define _AST_H_

#include <stdbool.h>

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
    COMMON
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
        [COMMON] = "common-node"
};

struct ast_node;

struct ast_expression {
    char *oper_name;
    struct ast_node *left;
    struct ast_node *right;
};

struct ast_common {
    char *node_name;
    struct ast_node *first;
    struct ast_node *second;
};

struct ast_call {
    char *ident;
    struct ast_node *call_list;
};

struct ast_loop {
    char *loop_type;
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
    char *name;
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
    };
};

struct ast_node *make_common_node(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_expr_node(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_call_node(char *, struct ast_node *);

struct ast_node *make_loop_node(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_block(struct ast_node *, struct ast_node *, struct ast_node *);

struct ast_node *make_branch_node(struct ast_node *);

struct ast_node *make_function_signature(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_body(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_source_item(char *, struct ast_node *, struct ast_node *);

struct ast_node *make_source(char *, struct ast_node *, struct ast_node *);

void free_ast(struct ast_node *);

int print_ast(struct ast_node *);

#endif // _AST_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ast.h"

unsigned long long counter = 0;

struct ast_node *make_node(enum ast_node_type type) {
    struct ast_node *node = (struct ast_node *) malloc(sizeof(struct ast_node));

    if (node == NULL) {
        fprintf(stderr, "Node can not be created: allocation failed\n");
        exit(1);
    }

    node->id = counter++;
    node->type = type;

    return node;
}

struct ast_node *make_common_node(char *name, struct ast_node *first, struct ast_node *second) {
    struct ast_node *ident = make_node(COMMON);

    strncpy(ident->ast_common.node_name, name, MAXIMUM_IDENTIFIER_LENGTH);

    ident->ast_common.left = first;
    ident->ast_common.right = second;

    return ident;
}

struct ast_node *make_expr_node(char *name, struct ast_node *first, struct ast_node *second) {
    struct ast_node *expr = make_node(EXPRESSION);

    strncpy(expr->ast_expression.oper_name, name, MAXIMUM_IDENTIFIER_LENGTH);

    expr->ast_expression.left = first;
    expr->ast_expression.right = second;

    return expr;
}

struct ast_node *make_call_node(struct ast_node *ident, struct ast_node *node) {
    struct ast_node *call = make_node(CALL);

    call->ast_call.ident = ident;
    call->ast_call.call_list = node;

    return call;
}

struct ast_node *make_loop_node(char *name, struct ast_node *first, struct ast_node *second) {
    struct ast_node *loop = make_node(LOOP);

    strncpy(loop->ast_loop.loop_type, name, MAXIMUM_IDENTIFIER_LENGTH);

    loop->ast_loop.expression = first;
    loop->ast_loop.statement = second;

    return loop;
}

struct ast_node *make_block(struct ast_node *node) {
    struct ast_node *block = make_node(BLOCK);

    block->ast_block.block_items = node;

    return block;
}

struct ast_node *
make_branch_node(struct ast_node *expression, struct ast_node *statement1, struct ast_node *statement2) {
    struct ast_node *branch = make_node(BRANCH);

    branch->ast_branch.if_expr = expression;
    branch->ast_branch.if_statement = statement1;
    branch->ast_branch.else_statement = statement2;

    return branch;
}

struct ast_node *make_function_signature(struct ast_node *ident, struct ast_node *first, struct ast_node *second) {
    struct ast_node *signature = make_node(FUNCTION_SIGNATURE);

    signature->ast_function_signature.ident = ident;
    signature->ast_function_signature.args = first;
    signature->ast_function_signature.type_ref = second;

    return signature;
}

struct ast_node *make_body(struct ast_node *block, struct ast_node *body_var) {
    struct ast_node *body = make_node(BODY);

    body->ast_body.block = block;
    body->ast_body.last_block = body_var;

    return body;
}

struct ast_node *make_source_item(struct ast_node *signature, struct ast_node *body) {
    struct ast_node *source_item = make_node(SOURCE_ITEM);

    source_item->ast_source_item.signature = signature;
    source_item->ast_source_item.body = body;

    return source_item;
}

struct ast_node *make_source(struct ast_node *source_node, struct ast_node *source_item) {
    struct ast_node *source = make_node(SOURCE);

    source->ast_source.source = source_node;
    source->ast_source.source_item = source_item;

    return source;
}

struct ast_node *make_value_node(char *type, char *value) {
    struct ast_node *value_node = make_node(VALUE);

    strncpy(value_node->ast_value.value, value, MAXIMUM_IDENTIFIER_LENGTH);
    strncpy(value_node->ast_identifier.name, type, MAXIMUM_IDENTIFIER_LENGTH);

    return value_node;
}

struct ast_node *make_type_node(char *name) {
    struct ast_node *value_node = make_node(TYPE_N);

    strncpy(value_node->ast_type.type_name, name, MAXIMUM_IDENTIFIER_LENGTH);

    return value_node;
}

struct ast_node *make_ident_node(char *name) {
    struct ast_node *value_node = make_node(IDENTIFIER);

    strncpy(value_node->ast_identifier.name, name, MAXIMUM_IDENTIFIER_LENGTH);

    return value_node;
}

void free_ast(struct ast_node *node) {
    free(node);
}

void print_node_ident(struct ast_node *node) {
    printf("\"type: %s, id: %llu\"", ant_names[node->type], node->id);
}

void print_node(struct ast_node *node, unsigned int level) {
    if (node == NULL) return;

    switch (node->type) {
        case EXPRESSION: {
            print_node_ident(node);
            printf(" -> ");
            print_node(node->ast_expression.left, level + 1);
            printf(";\n");
            printf(" -> ");
            print_node(node->ast_expression.right, level + 1);
            printf(";\n");
            break;
        }
        case SOURCE: {
            printf(" -> ");
            print_node(node->ast_source.source, level);
            printf(" -> ");
            print_node(node->ast_source.source_item, level + 1);
            break;
        }
        case SOURCE_ITEM: {
            printf(" -> ");
            print_node(node->ast_source_item.signature, level + 1);
            printf(" -> ");
            print_node(node->ast_source_item.body, level + 1);
            break;
        }
        case BODY: {
            printf(" -> ");
            print_node(node->ast_source.source, level);
            printf(" -> ");
            print_node(node->ast_source.source_item, level + 1);
            break;
        }
        case FUNCTION_SIGNATURE: {
            printf(" -> ");
            print_node(node->ast_function_signature.ident, level + 1);
            printf(" -> ");
            print_node(node->ast_function_signature.args, level + 1);
            printf(" -> ");
            print_node(node->ast_function_signature.type_ref, level + 1);
            break;
        }
        case BRANCH: {
            printf(" -> ");
            print_node(node->ast_branch.if_expr, level + 1);
            printf(" -> ");
            print_node(node->ast_branch.if_statement, level + 1);
            printf(" -> ");
            print_node(node->ast_branch.else_statement, level + 1);
            break;
        }
        case BLOCK: {
            printf(" -> ");
            print_node(node->ast_block.block_items, level + 1);
            break;
        }
        case LOOP: {
            for (int i = 0; i < level; ++i) {
                printf(" ");
            }
            printf("type: %s\n", node->ast_loop.loop_type);
            print_node(node->ast_loop.statement, level + 1);
            print_node(node->ast_loop.expression, level + 1);
            break;
        }
        case CALL: {
            printf(" -> ");
            print_node(node->ast_call.ident, level + 1);
            print_node(node->ast_call.call_list, level + 1);
            break;
        }
        case COMMON: {
            for (int i = 0; i < level; ++i) {
                printf(" ");
            }
            printf("name: %s\n", node->ast_common.node_name);
            print_node(node->ast_common.left, level + 1);
            print_node(node->ast_common.right, level + 1);
            break;
        }
        case TYPE_N: {
            for (int i = 0; i < level; ++i) {
                printf(" ");
            }
            printf("%s\n", node->ast_type.type_name);
            break;
        }
        case VALUE: {
            for (int i = 0; i < level; ++i) {
                printf(" ");
            }
            printf("%s of %s\n", node->ast_value.value, node->ast_value.type_name);
            break;
        }
        case IDENTIFIER: {
            for (int i = 0; i < level; ++i) {
                printf(" ");
            }
            printf("%s\n", node->ast_identifier.name);
            break;
        }
        default:
            break;
    }
}

void print_ast(struct ast_node *node) {
    unsigned int level = 0;

    printf("digraph G {\n");

    print_node(node, level);

    printf(" [shape=Mdiamond];\n");
    printf("}\n");
}
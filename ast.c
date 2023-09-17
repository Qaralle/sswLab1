#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ast.h"

struct ast_node *make_node(enum ast_node_type type) {
    struct ast_node *node = (struct ast_node *) malloc(sizeof(struct ast_node));

    if (node == NULL) {
        fprintf(stderr, "Node can not be created: allocation failed\n");
        exit(1);
    }

    node->type = type;

    return node;
}

struct ast_node *make_common_node(char *name, struct ast_node *first, struct ast_node *second) {
    struct ast_node *ident = make_node(COMMON);
    strncpy(ident->ast_common.node_name, name, 1024);
    ident->ast_common.left = first;
    ident->ast_common.right = second;

    return ident;
}

struct ast_node *make_expr_node(char *name, struct ast_node *first, struct ast_node *second) {
    struct ast_node *expr = make_node(EXPRESSION);
    strncpy(expr->ast_expression.oper_name, name, 1024);
    expr->ast_expression.left = first;
    expr->ast_expression.right = second;

    return expr;
}

struct ast_node *make_call_node(char *name, struct ast_node *node) {
    struct ast_node *call = make_node(CALL);
    strncpy(call->ast_call.ident, name, 1024);
    call->ast_call.call_list = node;

    return call;
}

struct ast_node *make_loop_node(char *name, struct ast_node *first, struct ast_node *second) {
    struct ast_node *loop = make_node(LOOP);
    strncpy(loop->ast_loop.loop_type, name, 1024);
    loop->ast_loop.expression = first;
    loop->ast_loop.statement = second;

    return loop;
}

struct ast_node *make_block(struct ast_node *node) {
    struct ast_node *block = make_node(BLOCK);
    block->ast_block.block_items = node;

    return block;
}

struct ast_node *make_branch_node(struct ast_node *expression, struct ast_node *statement1, struct ast_node *statement2) {
    struct ast_node *branch = make_node(BRANCH);
    branch->ast_branch.if_expr = expression;
    branch->ast_branch.if_statement = statement1;
    branch->ast_branch.else_statement = statement2;

    return branch;
}

struct ast_node *make_function_signature(char *name, struct ast_node *first, struct ast_node *second) {
    struct ast_node *signature = make_node(FUNCTION_SIGNATURE);
    strncpy(signature->ast_function_signature.name, name, 1024);
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

void free_ast(struct ast_node *node) {
    free(node);
}

//static void preprint_ast(struct ast_node *node) {
//    nr_spaces += 2;
//    for (size_t i = 0; i < nr_spaces; ++i)
//        fprintf(stderr, " ");
//
//    fprintf(stderr, ANT_COMMON_FMT, ant_names[node->type], (long unsigned int) node);
//    switch (node->type) {
//        case PROGRAM:
//            fprintf(stderr, ANT_PROGRAM_FMT "\n",
//                    (long unsigned int) node->as_program.child);
//            break;
//        case STMTS_LIST:
//            fprintf(stderr, ANT_STMTS_LIST_FMT "\n",
//                    (long unsigned int) node->as_stmts_list.current,
//                    (long unsigned int) node->as_stmts_list.next);
//            break;
//        case REPEAT:
//            fprintf(stderr, ANT_REPEAT_FMT "\n",
//                    (long unsigned int) node->as_repeat.test,
//                    (long unsigned int) node->as_repeat.body);
//            break;
//        case BRANCH:
//            fprintf(stderr, ANT_BRANCH_FMT "\n",
//                    (long unsigned int) node->as_branch.test,
//                    (long unsigned int) node->as_branch.consequent,
//                    (long unsigned int) node->as_branch.alternate);
//            break;
//        case UNEXPR:
//            fprintf(stderr, ANT_UNEXPR_FMT "\n",
//                    ot_symbol[node->as_unexpr.oper],
//                    (long unsigned int) node->as_unexpr.argument);
//            break;
//        case EXPR:
//            fprintf(stderr, ANT_EXPR_FMT "\n",
//                    (long unsigned int) node->as_expr.left,
//                    ot_symbol[node->as_expr.oper],
//                    (long unsigned int) node->as_expr.right);
//            break;
//        case CONST:
//            fprintf(stderr, ANT_CONST_FMT "\n", node->as_const.value);
//            break;
//        case IDENT:
//            fprintf(stderr, ANT_IDENT_FMT "\n", node->as_ident.name);
//            break;
//        default:
//            fprintf(stderr, "unknown-node>\n");
//            break;
//    }
//}
//
//static void postprint_ast(struct ast_node *node) {
//    nr_spaces -= 2;
//}
//
//void dfs_traverse(struct ast_node *node, process_cb preproccess_cb, process_cb postprocess_cb) {
//    if (node == NULL) return;
//
//    preproccess_cb(node);
//
//    switch (node->type) {
//        case PROGRAM:
//            dfs_traverse(node->as_program.child, preproccess_cb, postprocess_cb);
//            break;
//        case STMTS_LIST: {
//            struct ast_node *iter = node;
//            while (iter != NULL) {
//                dfs_traverse(iter->as_stmts_list.current, preproccess_cb, postprocess_cb);
//                struct ast_node *temp = iter;
//                iter = iter->as_stmts_list.next;
//                postprocess_cb(temp); // for good freeing
//            }
//            return;
//        }
//        case REPEAT: {
//            dfs_traverse(node->as_repeat.body, preproccess_cb, postprocess_cb);
//            dfs_traverse(node->as_repeat.test, preproccess_cb, postprocess_cb);
//            break;
//        }
//        case BRANCH: {
//            dfs_traverse(node->as_branch.test, preproccess_cb, postprocess_cb);
//            dfs_traverse(node->as_branch.consequent, preproccess_cb, postprocess_cb);
//            dfs_traverse(node->as_branch.alternate, preproccess_cb, postprocess_cb);
//            break;
//        }
//        case UNEXPR:
//            dfs_traverse(node->as_unexpr.argument, preproccess_cb, postprocess_cb);
//            break;
//        case EXPR: {
//            dfs_traverse(node->as_expr.left, preproccess_cb, postprocess_cb);
//            dfs_traverse(node->as_expr.right, preproccess_cb, postprocess_cb);
//            break;
//        }
//        default:
//            break;
//    }
//
//    postprocess_cb(node);
//    return;
//}

//void free_ast(struct ast_node *root) {
//    dfs_traverse(root, dump_cb, free_node);
//}
//
//int print_ast(struct ast_node *root) {
//    dfs_traverse(root, preprint_ast, postprint_ast);
//    return 1;
//}
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

    return ident;
}

struct ast_node *make_constant(int value) {
    struct ast_node *constant = make_node(CONST);

    constant->as_const.value = value;

    return constant;
}

struct ast_node *make_expression(struct ast_node *left, enum operation_type oper, struct ast_node *right) {
    struct ast_node *expr = make_node(EXPR);

    expr->as_expr.left = left;
    expr->as_expr.oper = oper;
    expr->as_expr.right = right;

    return expr;
}

struct ast_node *make_unexpression(enum operation_type oper, struct ast_node *arg) {
    struct ast_node *unexpr = make_node(UNEXPR);

    unexpr->as_unexpr.oper = oper;
    unexpr->as_unexpr.argument = arg;

    return unexpr;
}

struct ast_node *make_branch(struct ast_node *test, struct ast_node *consequent, struct ast_node *alternate) {
    struct ast_node *branch = make_node(BRANCH);

    branch->as_branch.test = test;
    branch->as_branch.consequent = consequent;
    branch->as_branch.alternate = alternate;

    return branch;
}

struct ast_node *make_repeat(struct ast_node *test, struct ast_node *body) {
    struct ast_node *repeat = make_node(REPEAT);

    repeat->as_repeat.test = test;
    repeat->as_repeat.body = body;

    return repeat;
}

struct ast_node *make_stmts_list(struct ast_node *head, struct ast_node *next) {
    struct ast_node *list = make_node(STMTS_LIST);

    list->as_stmts_list.current = head;
    list->as_stmts_list.next = next;

    return list;
}

void stmts_list_insert(struct ast_node **head_p, struct ast_node *first) {
    if (*head_p) {
        struct ast_node *const oldstart = make_stmts_list((*head_p)->as_stmts_list.current,
                                                          (*head_p)->as_stmts_list.next);
        free(*head_p);
        (*head_p) = make_stmts_list(first, oldstart);
    } else *head_p = make_stmts_list(first, NULL);
}

struct ast_node *make_program(struct ast_node *child) {
    struct ast_node *program = make_node(PROGRAM);

    program->as_program.child = child;

    return program;
}

static void free_node(struct ast_node *node) {
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
#ifndef OTHERS_H
#define OTHERS_H

#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree);
int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
size_t _height(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);

#endif

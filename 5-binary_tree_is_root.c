#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is root
 *
 * @node: The given node
 *
 * Return: 1 when @node is the root node or
 * 0 when @node is not a leaf node or @node
 * is NULL.
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}

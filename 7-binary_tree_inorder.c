#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a tree using
 * the in-order traversal.
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function to call for each
 * node in @tree
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

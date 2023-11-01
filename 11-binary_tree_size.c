#include "binary_trees.h"

/**
* binary_tree_size - Function that measures the size of a binary tree
*
* tree: pointer to the root node of binary tree
* return: 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes = 0, right_nodes = 0, total_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);

	total_nodes = left_nodes + right_nodes + 1;

	return (total_nodes);
}

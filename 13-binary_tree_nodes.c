#include "binary_trees.h"

/**
* binary_tree_nodes - Function that counts the nodes
* with at least 1 child in a binary tree
*
* @tree: Pointer to the root node of the
* tree to count the number of nodes
*
* Return: 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_counts, right_counts;

	if (tree == NULL)
		return (0);

	left_counts = binary_tree_nodes(tree->left);
	right_counts = binary_tree_nodes(tree->right);

	if (tree->right || tree->left)
		return (1 + left_counts + right_counts);

	return (left_counts + right_counts);
}

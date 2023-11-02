#include "binary_trees.h"
#include <stddef.h>

/**
* binary_tree_leaves - Function that counts binary tree leaves
*
* @tree: pointer to root node of the tree to count the number of leaves
* Return: 0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0, total_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		total_leaves = 1;
		return (total_leaves);
	}

	total_leaves += left_leaves + right_leaves;
	return (total_leaves);
}

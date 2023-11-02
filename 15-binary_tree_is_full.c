#include "binary_trees.h"

/**
* binary_tree_is_full - Function that  checks if a binary tree is full
*
* @tree: Pointer to root node of binary tree
* Return: 0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_tree_full, right_tree_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_tree_full = binary_tree_is_full(tree->left);
	right_tree_full = binary_tree_is_full(tree->right);

	return (left_tree_full && right_tree_full);
}


#include "binary_trees.h"
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**
* binary_tree_height_helper - Function that determines the
* height of a binary tree
*
* @tree: Pointer to the root nod of the tree
* Return: 0 if tree is NULL
*/

int binary_tree_height_helper(const binary_tree_t *tree)
{
	int left_tree_height, right_tree_height;

	if (tree == NULL)
		return (0);

	left_tree_height = binary_tree_height_helper(tree->left);
	right_tree_height = binary_tree_height_helper(tree->right);

	return (1 + MAX(left_tree_height, right_tree_height));
}

/**
* binary_tree_is_perfect - Function that checks if a binary tree is perfect
*
* @tree: Pointer to the root node of the tree to check
* Return: 0 if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree_height, right_tree_height;

	if (tree == NULL)
		return (0);


	left_tree_height = binary_tree_height_helper(tree->left);
	right_tree_height = binary_tree_height_helper(tree->right);

	if (left_tree_height == right_tree_height)
	{
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	}
	return (0);
}

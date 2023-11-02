#include "binary_trees.h"
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

/**
* binary_tree_height - Function that determines the
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
* binary_tree_balance - Function that measures
* the balance factor of a binary tree
*
* @tree: Pinter to the root node of the
* tree to measure the balance factor
* Return: 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_subtree, right_subtree;

	if (tree == NULL)
		return (0);

	left_subtree = binary_tree_height_helper(tree->left);
	right_subtree = binary_tree_height_helper(tree->right);

	return (left_subtree - right_subtree);
}

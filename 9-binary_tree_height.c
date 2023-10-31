
#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (0);
	}
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		if (left_height >= right_height)
		{
			return ((size_t)(left_height + 1));
		}
		else
		{
			return ((size_t)(right_height + 1));
		}
	}
}

#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines whether the
 * given node is a leaf node or not.
 *
 * @node: The given node
 *
 * Return: 1 when @node is a leaf node otherwise
 * 0 when @node is not a leaf node or @node is
 * NULL.
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node)
	{
		if (node->left != NULL || node->right != NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

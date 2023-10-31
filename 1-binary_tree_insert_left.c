#include "binary_trees.h"

/**
 * binary_tree_insert_left - Add a new node as the
 * left child of @parent.
 *
 * @parent: The parent for the new node
 * @value: The value for the newly created node
 *
 * Return: A pointer to the newly created node
 * or NULL.
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = NULL;

	NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = parent->left;
	NewNode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;

	return (NewNode);
}

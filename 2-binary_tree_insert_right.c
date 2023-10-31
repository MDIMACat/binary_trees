#include "binary_trees.h"


/**
 * binary_tree_insert_right - Add a new node as the
 * right child of @parent.
 *
 * @parent: The parent for the new node
 * @value: The value for the newly created node
 *
 * Return: A pointer to the newly created node
 * or NULL.
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = NULL;

	if (!parent)
	{
		return (NULL);
	}


	NewNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->right = NULL;
	NewNode->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = NewNode;
		NewNode->right = parent->right;
	}
	parent->right = NewNode;

	return (NewNode);
}

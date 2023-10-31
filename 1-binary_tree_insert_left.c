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
	binary_tree_t *new_node = NULL;

	if (!parent)
	{
		return (NULL);
	}

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}

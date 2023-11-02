#include "binary_trees.h"

/**
* binary_tree_uncle - Fumction that finds the uncle of a node
*
* @node: Pointer to the node to find the uncle
* Return: NULL if node is NULL or if node uncle is NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

	return (NULL);
}

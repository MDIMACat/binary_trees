
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary
 * tree.
 *
 * @tree: A pointer to the root of the tree
 *
 **/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current = tree;

	if (tree)
	{
		binary_tree_delete(current->left);
		binary_tree_delete(current->right);
		free(current);
	}
}

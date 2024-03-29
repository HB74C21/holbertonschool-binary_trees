#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_IS_ROOT*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_is_root - Function that checks if a given node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a root, otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root = 1;

	if ((node == NULL) || (node->parent != NULL))
		is_root = 0;
	return (is_root);
}

#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_SIBLING*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node. Or NULL if doesn't exist or failure.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *buffer = NULL;

	if ((node == NULL) || (node->parent == NULL))
		return (NULL);
	buffer = node->parent;
	if (buffer->left == node)
	{
		if (buffer->right != NULL)
			return (buffer->right);
	} else
	{
		if (buffer->left != NULL)
			return (buffer->left);
	}
	return (NULL);
}

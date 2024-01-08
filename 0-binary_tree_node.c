#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_NODE*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent of new node.
 * @value: Value of new node.
 *
 * Return: pointer to the new node on success. NULL on failure.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_node = NULL;

	new_tree_node = malloc(sizeof(binary_tree_t));

	if (new_tree_node != NULL)
	{
		new_tree_node->parent = parent;
		new_tree_node->left = NULL;
		new_tree_node->right = NULL;
		new_tree_node->n = value;
	}
	return (new_tree_node);
}

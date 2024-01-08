#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_INSERT_RIGHT*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_insert_right - Inserts node as the right-child of another node.
 * @parent: Pointer to the node to insert the right_child.
 * @value: Value of insert's node.
 *
 * Return: Pointer to the created node on success.
 * NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_node = NULL, *buf_node = NULL;

	new_tree_node = binary_tree_node(parent, value);

	if ((new_tree_node != NULL) && (parent != NULL))
	{
		if (parent->right != NULL)
		{
			buf_node = parent->right;
			parent->right = new_tree_node;
			new_tree_node->left = buf_node->left;
			new_tree_node->right = buf_node;
			buf_node->left = NULL;
			buf_node->parent = new_tree_node;
		}
		else
			parent->right = new_tree_node;
	}
	return (new_tree_node);
}

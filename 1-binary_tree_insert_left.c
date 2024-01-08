#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_INSERT_LEFT*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_insert_left - Inserts node as the left-child of another node.
 * @parent: Pointer to the node to insert the left_child.
 * @value: Value of insert's node.
 *
 * Return: Pointer to the created node on success.
 * NULL on failure or if parent is NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree_node = NULL, *buf_node = NULL;

	new_tree_node = binary_tree_node(parent, value);
	if ((new_tree_node != NULL) && (parent != NULL))
	{
		if (parent->left != NULL)
		{
			buf_node = parent->left;
			parent->left = new_tree_node;
			new_tree_node->right = buf_node->right;
			buf_node->right = NULL;
			new_tree_node->left = buf_node;
			buf_node->parent = new_tree_node;
		}
		else
			parent->left = new_tree_node;
	}
	if (parent == NULL)
	{
		free(new_tree_node);
		new_tree_node = NULL;
	}
	return (new_tree_node);
}

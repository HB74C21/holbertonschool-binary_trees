#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_DEPTH*/
/*---------------------------------------------------------------------------*/
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The number of height of the tree.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
<<<<<<< HEAD
	if ((tree == NULL) || (tree->parent == NULL))
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
=======
	size_t ret_value = 0;

	if ((tree == NULL) || ((tree->left != NULL) && (tree->right != NULL)))
		return (0);
	if (tree->left == NULL)
		ret_value++;
	if (tree->right == NULL)
		ret_value++;
	return (ret_value);
>>>>>>> dc52ab0 (writing function to file 10)
}

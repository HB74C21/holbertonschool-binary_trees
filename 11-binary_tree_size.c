#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_SIZE*/
/*---------------------------------------------------------------------------*/
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: The number of node of the tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

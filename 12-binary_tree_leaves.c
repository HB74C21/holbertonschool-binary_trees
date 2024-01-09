#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_LEAVES*/
/*---------------------------------------------------------------------------*/
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 *
 * Return: The number of leaves of the tree.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (binary_tree_leaves(NULL) + 1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

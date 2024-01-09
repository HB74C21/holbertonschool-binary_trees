#include "binary_trees.h"

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_HEIGHT_B*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height of the tree. Begin from 0.
 */

int binary_tree_height_b(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);
	left = binary_tree_height_b(tree->left);
	right = binary_tree_height_b(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

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

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_NODES*/
/*---------------------------------------------------------------------------*/
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 *
 * Return: The number of nodes of the tree.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left != NULL) || (tree->right != NULL))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)
		+ 1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

/*---------------------------------------------------------------------------*/
		/*BINARY_TREE_IS_PERFECT*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if is perfect. 0 if not.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l = 0, size_l = 0, leave_l = 0, node_l = 0;
	int height_r = 0, size_r = 0, leave_r = 0, node_r = 0;

	if ((tree == NULL) || (tree->left == NULL) || (tree->right == NULL))
		return (0);
	height_l = binary_tree_height_b(tree->left);
	size_l = ((int)binary_tree_size(tree->left));
	leave_l = ((int)binary_tree_leaves(tree->left));
	node_l = ((int)binary_tree_nodes(tree->left));

	height_r = binary_tree_height_b(tree->right);
	size_r = ((int)binary_tree_size(tree->right));
	leave_r = ((int)binary_tree_leaves(tree->right));
	node_r = ((int)binary_tree_nodes(tree->right));

	if ((height_l == height_r) && (size_l == size_r) && (leave_l == leave_r)
	&& (node_l == node_r))
		return (1);
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
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
		/*BINARY_TREE_BALANCE*/
/*---------------------------------------------------------------------------*/

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The number of nodes of the tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, total = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);
	left = binary_tree_height_b(tree->left);
	right = binary_tree_height_b(tree->right);
	if (tree->left != NULL)
		left++;
	if (tree->right != NULL)
		right++;
	total = left - right;
	return (total);
}

#include "binary_trees.h"

/**
 * binary_tree_height_helper - Measures height of a binary tree for a bal tree
 *
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (left_h+ 1);
	return (right_h + 1);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree_height = 0;
	int right_tree_height = 0;
	int diff;
	
	if (tree == NULL)
		return (0);

	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);
	diff = left_tree_height - right_tree_height;

	return (diff);
}

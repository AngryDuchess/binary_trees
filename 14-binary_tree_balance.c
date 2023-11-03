#include "binary_trees.h"

/**
 * binary_tree_height_helper - Measures height of a binary tree for a bal tree
 *
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_helper(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_tree_height = binary_tree_height_helper(tree->left);
	int right_tree_height = binary_tree_height_helper(tree->right);
	int diff = left_tree_height - right_tree_height;

	return (diff);
}

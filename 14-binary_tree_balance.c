#include "binary_trees.h"
/**
 * binary_tree_height_helper - alculates the height of a binary tree
 *
 * @tree - pointer to the root node
 * Return: height
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
 * binary_tree_height_helper - calcs the height of a tree
 *
 * @tree: pointer to root node
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

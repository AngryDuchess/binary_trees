#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a binary tree
 *
 * @tree: pointer to the root node
 * Return: child tree with greatest height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/*initialize variables to keep track of the height of each subtree*/
	size_t left_tree_height = 0;
	size_t right_tree_height = 0;

	if (tree == NULL)
		return (0);

	/*if subtree is not null add 1 to ites height, else add 0*/
	if (tree->left != NULL)
		left_tree_height = 1 + binary_tree_height(tree->left);
	else
		left_tree_height = 0;

	if (tree->right != NULL)
		right_tree_height = 1 + binary_tree_height(tree->right);
	else
		right_tree_height = 0;

	/*compare both subtrees and return the longest*/
	if (left_tree_height > right_tree_height)
		return (left_tree_height);
	else
		return (right_tree_height);
}

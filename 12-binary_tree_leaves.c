#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves at a node
 *
 * @tree: pointer to root node
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = binary_tree_leaves(tree->left);
        size_t right_leaves = binary_tree_leaves(tree->right);

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (left_leaves + right_leaves);
}

#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child in a BT
 *
 * @tree: pointer to the root node
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_children = binary_tree_nodes(tree->left);
	size_t right_children = binary_tree_nodes(tree->right);

	if ((tree->left != NULL) || (tree->right != NULL))
		return (left_children + right_children + 1);
	return (left_children + right_children);
}

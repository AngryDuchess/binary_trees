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
	size_t left_children = 0;
	size_t right_children = 0;

	if (tree->left != NULL)
		left_children++;
	else 
		return 0;
	if (tree->right != NULL)
		right_children++;
	else
		return 0;
	return 1 + left_children + right_children;
}

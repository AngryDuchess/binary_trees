#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to count the nodes from
 *
 * Return: number of nodes counted
 * 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_children = 0;
	size_t right_children = 0;

	if (tree == NULL)
		return (0);
	left_children = binary_tree_nodes(tree->left);
	right_children = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
	/*if ((tree->left != NULL) || (tree->right != NULL))*/
		return (left_children + right_children + 1);
	return (left_children + right_children);
}

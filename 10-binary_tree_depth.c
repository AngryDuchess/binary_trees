#include "binary_trees.h"
/**
 * binary_tree_depth - calculates the depth of a BT
 *
 * @tree: pointer to the root node
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree_depth++;
		tree = tree->parent;
	}
	return (tree_depth);
}

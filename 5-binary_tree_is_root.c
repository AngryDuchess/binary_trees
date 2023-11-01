#include "binary_trees.h"
/**
 * binary_tree_is_root - checks is a node is the root
 * @node: node to be checked
 * Return: 0 if node is null and if it is not the root, 1 if its the root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}

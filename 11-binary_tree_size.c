#include "binary_trees.h"
/**
 * binary_tree_size - calculates the size of a BT
 *
 * @tree: pointer to the root node
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size, left_child_size, right_child_size = 0;

	if (tree == NULL)
		return (0);
	left_child_size =  binary_tree_size(tree->left);
	right_child_size = binary_tree_size(tree->right);
	tree_size = left_child_size + right_child_size + 1;

	return (tree_size);
}

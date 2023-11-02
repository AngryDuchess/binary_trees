#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves at a node
 *
 * @tree: pointer to root node
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	/**
	 * hecks both left and right nodes of a tree and returns 1
	 * if a node is a leaf
	 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*add left leaves to right leaves to get total leaves*/
	return (left_leaves + right_leaves);
}

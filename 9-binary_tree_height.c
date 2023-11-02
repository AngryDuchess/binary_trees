#include "binary_trees.h"
/**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree_height = 0;
	size_t right_tree_height = 0;

	if (tree == NULL)
		return 0;
	if (tree-> left != NULL)
		left_tree_height = 1 + binary_tree_height(tree->left);
	else
		left_tree_height = 0;

	if (tree->right != NULL)
		right_tree_height = 1 + binary_tree_height(tree->right);
	else
		right_tree_height = 0;

	if (left_tree_height > right_tree_height)
		return left_tree_height;
	else
		return right_tree_height;
}

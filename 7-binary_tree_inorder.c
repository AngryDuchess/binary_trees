#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses a tree using inorder traversal
 *
 * @tree: pointer to the root node
 * @func: pointer to a function
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	/*if tree or func is null do nothing*/
	if (tree == NULL || func == NULL)
		return;
	/*pass value stored in nodes in func
	func(tree->n);*/
	/*pass each subtree as an argument to inorder function recuresively*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}

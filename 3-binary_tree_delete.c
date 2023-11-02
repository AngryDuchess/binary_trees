/**
 * binary_tree_delete - deltes a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: Nothing
 */
#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current =  tree;
	binary_tree_t *temp;

	while (current != NULL)
	{
		if (current->left == NULL)
		{
			temp = current->right;
			free(current);
			current = temp;
		}
		else
		{
			temp = current->left;
			current->left = temp->right;
			temp->right = current;
			current = temp;
		}
	}
}

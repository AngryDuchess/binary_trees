#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a new node to the left
 * of another node
 *
 * @parent: pointer to the parent node
 * @value: valueof a node
 *
 * Return: new left node of the parent
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
	{
		return (NULL);
	}

	new_left_node->n = value;
	/*new_left_node->left = NULL;*/
	new_left_node->right = NULL;
	new_left_node->parent = parent;
	new_left_node->left = parent->left;
	parent->left = new_left_node;

	if (new_left_node->left != NULL)
	{
		new_left_node->left->parent =  new_left_node;
	}
	return (new_left_node);
}

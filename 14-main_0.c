#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */
binary_tree_t *_binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int balance;

	root = _binary_tree_node(NULL, 98);

	balance = binary_tree_balance(root);
	printf("Balance factor for tree with root node (%d): %+d\n", root->n, balance);

	binary_tree_print(root);
	_binary_tree_delete(root);
	return (0);
}

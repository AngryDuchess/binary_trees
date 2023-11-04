#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common
 * ancestor node of the two given nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *f_parent;
	binary_tree_t *s_parent;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((void *) first);

	f_parent = first->parent;
	s_parent = second->parent;

	if (s_parent == NULL || f_parent == second || (!s_parent->parent && f_parent))
		return (binary_trees_ancestor(f_parent, second));
	else if (f_parent == NULL || first == s_parent ||
			(!f_parent->parent && s_parent))
		return (binary_trees_ancestor(first, s_parent));
	return (binary_trees_ancestor(f_parent, s_parent));
}

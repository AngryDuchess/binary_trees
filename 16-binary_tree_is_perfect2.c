#include "binary_trees.h"

/*int is_leaf(const binary_tree_t *node)
{
        if (node == NULL)
                return (0);
        if ((node->left == NULL) && (node->right == NULL))
                return (1);
        return (0);
}
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left==NULL && tree->right==NULL)/* || (!tree->left && !tree->right)*/)
		return 1;
	else if (tree->left !=NULL && tree->right!=NULL)
		return 1;
	else
		return 0;
}

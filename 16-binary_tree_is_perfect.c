#include "binary_trees.h"
int status = 1;

int
is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!((tree->right && tree->left) || (!(tree->right) && !(tree->left))))
			status = 0;
		is_perfect(tree->right);
		is_perfect(tree->left);
	}
	return (0);
}
int
binary_tree_is_perfect(const binary_tree_t *tree)
{
	is_perfect(tree);
	if (status == 1)
		return (1);
	else
		return (0);
}

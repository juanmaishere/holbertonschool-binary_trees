#include "binary_trees.h"
int status = 1;

int
is_perfect(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree)
	{
		l_height = binary_tree_height(tree->left);
		r_height = binary_tree_height(tree->right);
		if (!((tree->right && tree->left) || (!(tree->right) && !(tree->left))) || (l_height != r_height))
			status = 0;
		is_perfect(tree->right);
		is_perfect(tree->left);
	}
	return (status);
}
int
binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	is_perfect(tree);
	if (status == 1)
		return (1);
	else
		return (0);
}

#include "binary_trees.h"

int
binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *node = tree;
	unsigned int r_levels = 0;
	unsigned int l_levels = 0;

	if (!tree)
		return (0);
	while (node->left)
	{
		if (!(node->right))
			return (0);
		node = node->left;
		l_levels++;
	}
	if (node->right)
		return (0);
	while (node->parent)
		node = node->parent;
	while (node->right)
	{
		if(!(node->left))
			return (0);
		node = node->right;
		r_levels++;
	}
	if (node->left)
		return (0);
	if (l_levels == r_levels)
		return (1);
	else
		return(0);
}

#include "binary_trees.h"
size_t
binary_tree_nodes(const binary_tree_t *tree)
{
int i = 0;

if (tree == NULL)
{
return (0);
}
if (tree->left || tree->right)
{
i += 1;
}

i += binary_tree_nodes(tree->left);
i += binary_tree_nodes(tree->right);

return (i);
}

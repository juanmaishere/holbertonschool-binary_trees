#include "binary_trees.h"
size_t
binary_tree_leaves(const binary_tree_t *tree)
{
size_t l1, l2;
if (!tree)
{
return (0);
}
if (tree->left && tree->right)
{
return (1);
}

l1 = binary_tree_leaves(tree->left);
l2 = binary_tree_leaves(tree->right);

return (l1 + l2);
}

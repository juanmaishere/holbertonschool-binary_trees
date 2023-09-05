#include "binary_trees.h"
int
binary_tree_balance(const binary_tree_t *tree)
{
int bl = 0;
if (tree == NULL)
{
return (0);
}

bl = binary_tree_height(tree->left) - binary_tree_height(tree->right);

return (bl);
}
size_t binary_tree_height(const binary_tree_t *tree)
{
int l = 0, r = 0;

if (!tree)
{
return (-1);
}
if (tree->right == NULL && tree->left == NULL)
{
return (0);
}

l = binary_tree_height(tree->left);
r = binary_tree_height(tree->right);

if (l > r)
{
return (l + 1);
}
else
{
return (r + 1);
}
}

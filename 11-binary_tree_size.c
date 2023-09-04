#include "binary_trees.h"
size_t
binary_tree_size(const binary_tree_t *tree)
{
int left = 0, right = 0;

if (tree == NULL)
{
return (0);
}
else
{
left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);
return (left + right + 1);
}

}
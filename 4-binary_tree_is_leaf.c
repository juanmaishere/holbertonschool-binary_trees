#include "binary_trees.h"
int
binary_tree_is_leaf(const binary_tree_t *node)
{
int c = 0;

if (!node)
{
return (0); }

if (node->right == NULL)
{
c++; }

if (node->left == NULL)
{
c++; }

if (c == 2)
{
return (1); }

return (0);
}

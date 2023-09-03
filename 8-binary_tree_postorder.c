#include "binary_trees.hbet"
void
binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
{
return;
}
printPostorder(tree->left);

printPostorder(tree->right);

func(tree->data);
}

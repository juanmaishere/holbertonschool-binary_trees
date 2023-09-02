#include "binary_trees.h"
binary_tree_t
*binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;

if(!parent)
{
    return (NULL);
}
newnode = malloc(sizeof(binary_tree_t));

if(!newnode)
{
    return (NULL);
}    
newnode->n = value;
newnode->parent = parent;
newnode->left = NULL;
newnode->right = NULL;
   
if (parent->right != NULL)
{
newnode->right = parent->right;
parent->right->parent = newnode;
}
parent->right = newnode;

return(newnode);
}
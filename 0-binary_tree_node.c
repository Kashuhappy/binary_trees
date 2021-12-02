#include "binary_trees.h"
/**
*@parent: is a pointer to the parent node of the node to create
*@value: is the value to put in the new node to create
*
*node does not have any child
*function must return a pointer to the new node
*or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
{
binary_tree_t *new;
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->x = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
return (new);
}

#include "binary_trees.h"
/**
*@parent is a pointer to the node to insert the right-child in
*@value is the value to store in the new node
*return a pointer to the created node, or NULL on failure or if parent is NULL
*if parent already has a right-child, the new node must take its place
*the old right-child must be set as the right-child of the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
{
binary_tree_t *new_node = NULL;
if (parent == NULL)
return (NULL);
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);
if (parent->right != NULL)
{
parent->right->parent = new_node;
new_node->right = parent->right;
}
parent->right = new_node;
return (new_node);
}

#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: input value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;

newnode = malloc( sizeof(binary_tree_t));
if (!newnode)
return (NULL);
newnode->parent = parent;
newnode->n = value;
newnode->left = newnode->right = NULL;
return (newnode);
}

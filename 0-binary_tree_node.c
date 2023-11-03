#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 * @parent: pointer to the parent node to create
 * @value: value of the new node
 * 
 * Return: NULL if error occurred.
 * otherwise pointer to new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = mallooc(sizeof(binary_tree_t));
    if (new == NULL)
    return NULL;

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    return new;
}
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: value that new node
 * Return: return a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);
}

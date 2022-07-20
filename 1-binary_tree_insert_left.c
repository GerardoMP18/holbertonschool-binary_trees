#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * of another node
 * @parent: is a pointer to the node to insert the left-child
 * @value: the value to store in the new node
 * Return: return the pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = value;
	tmp->parent = parent;
	tmp->left = NULL;
	tmp->right = NULL;

	if (parent->left != NULL)
	{
		tmp->left = parent->left;
		tmp->left->parent = tmp;
	}
	parent->left = tmp;
	return (tmp);
}

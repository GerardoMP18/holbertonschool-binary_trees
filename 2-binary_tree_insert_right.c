#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node
 * @parent: is a pointer to the node to insert the right-child
 * @value: the value to store in the new node
 * Return: return the pointer
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right != NULL)
	{
		tmp->right = parent->right;
		tmp->right->parent = tmp;
	}

	parent->right = tmp;

	return (tmp);
}

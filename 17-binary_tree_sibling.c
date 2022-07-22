#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node:  pointer to the node to find the siblingh
 * Return: if find the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent->left == node)
	{
		return (parent->right);
	}

	return (parent->left);
}

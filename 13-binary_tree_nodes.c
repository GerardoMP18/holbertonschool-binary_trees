#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: count of nodes with at last 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c_node = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL &&  tree->right == NULL)
	{
		return (0);
	}

	c_node = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (c_node);
}

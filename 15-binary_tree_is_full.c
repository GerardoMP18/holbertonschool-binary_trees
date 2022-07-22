#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is full , return 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t full = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
		return (full);
	}

	return (0);
}

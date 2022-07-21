#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height -  function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the height
 * Return:  is NULL, your function must return 0
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}

	if (tree->right)
	{
		right_height = binary_tree_height(tree->right) + 1;
	}

	if (left_height < right_height)
	{
		return (right_height);
	}

	return (left_height);
}

#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the
 * balance factor
 * Return: Return if is balance or not balance
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

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_tree = 0;
	size_t right_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left_tree = binary_tree_height(tree->left);
	}
	else
	{
		left_tree = -1;
	}

	if (tree->right)
	{
		right_tree = binary_tree_height(tree->right);
	}
	else
	{
		right_tree = -1;
	}

	return (left_tree - right_tree);
}

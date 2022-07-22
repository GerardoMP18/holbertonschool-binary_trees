#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return (size);

}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: return 1 is number perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
	{
		return (1);
	}

	return (0);
}

#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - function that goes through a binary tree
 * using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
        int value;

        if (tree == NULL || func == NULL)
        {
                return;
        }

        value = tree->n;
        binary_tree_inorder(tree->left, func);
        func(value);
        binary_tree_inorder(tree->right, func);
}

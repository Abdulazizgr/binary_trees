#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: the tree
 *
 * Return: the size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + binary_tree_size(tree->left)
				+ binary_tree_size(tree->right));

	return (0);
}

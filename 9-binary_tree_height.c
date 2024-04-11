#include "binary_trees.h"

size_t max(size_t a, size_t b);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree or 0 if NULL..
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (max(left_height, right_height) + 1);
	else
		return (max(left_height, right_height));
}

size_t max(size_t a, size_t b)
{
	return (a > b) ? a : b;
}

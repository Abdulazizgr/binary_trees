#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right_height, left_height;

	if (tree == NULL)
		return (1);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height != right_height)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}

/**
 * height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of tree or 0 if NULL..
 */

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	else
		return (1 + max(height(tree->left), height(tree->right)));
}

/**
 * max - Used to check for the maximum value
 * @a: First value
 * @b: Second value
 * Return: the highest value
 */

int max(int a, int b)
{
	return ((a > b) ? a : b);
}

#include "binary_trees.h"


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: the binary tree pointer
 *
 * Return: balance factor of a node.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (height(tree->left) -
				height(tree->right));

	return (0);
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

#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with atleast 1 child in a tree
 * @tree: the binary tree
 *
 * Return: number of nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));

	return (0);
}

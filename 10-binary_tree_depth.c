#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in the binary tree
 * @tree: Pointer to the node used to measure the depth
 * 
 * Return: the depth of the node.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		return (1 + binary_tree_depth(tree->parent));
	
	return (0);
}

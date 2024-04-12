#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 *
 * Return: pointer to uncle node or NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	grand_parent = node->parent->parent;
	if (grand_parent == NULL)
		return (NULL);

	if (grand_parent->left == node->parent)
		return (grand_parent->right);
	else
		return (grand_parent->left);

}

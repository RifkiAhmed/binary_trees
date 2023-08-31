#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a node is a root,
 * root node is the node at the top of the tree, there is only one root
 * per tree.
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree.
 * +++++++++++
 * Definition:
 *   The depth of a node : is the number of edges on the path
 *   from the root node to this node.
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @tree: pointer to the node to measure the depth.
 *
 * Return: the depth of the node, or 0 if tree is null.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		if (tree->parent)
			depth = binary_tree_depth(tree->parent) + 1;
	}
	return (depth);
}

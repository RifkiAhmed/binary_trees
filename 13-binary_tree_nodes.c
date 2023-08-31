#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the node that have at least
 * one child in a binary tree.
 *
 * @tree: pointer to the root node of a binary tree to count the number
 * of nodes.
 *
 * Return: the number of nodes, or 0 if tree is null.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodes++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}

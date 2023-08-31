#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * The height of a binary tree is the length of the longest path from the root
 * node to a leaf node.
 *
 * @tree:  pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the tree, or 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, l_height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			return (binary_tree_height(tree->left) + 1);
		if (tree->right)
			return (binary_tree_height(tree->right) + 1);
	}
	height = (l_height > r_height) ? l_height : r_height;
	return (height);
}

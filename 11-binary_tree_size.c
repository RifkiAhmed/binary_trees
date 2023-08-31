#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * +++++++++++
 * Definition:
 *   The size of a binary tree : is the total number of
 *   nodes present in this tree.
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @tree: pointer to the root node of the binary tree to measure the size.
 *
 * Return: the size of the binary tree, or 0 if tree is null.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size++;
		if (tree->left)
			size += binary_tree_size(tree->left);
		if (tree->right)
			size += binary_tree_size(tree->right);
	}
	return (size);
}

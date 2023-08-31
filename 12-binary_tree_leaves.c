#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * +++++++++++
 * Definition:
 *   Leaves in binary tree : are the nodes that do not have any children
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @tree: pointer to the root node of a binary tree to count the number
 * of leaves.
 *
 * Return: the number of leaves, or 0 if tree is null.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->left)
			return (1);
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}

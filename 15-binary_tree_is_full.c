#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * +++++++++++
 * Definition:
 *   Full binary tree : defined as every node in the tree has either 0 or 2
 *   children.
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @tree: pointer to the root node of a binary tree to check.
 *
 * Return: 1 if tree is full, or 0 if tree is null or not full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree)
	{
		if (!tree->left ^ !tree->right)
		{
			full = binary_tree_is_full(NULL);

		}
		else
		{
			full = 1;
			full += binary_tree_is_full(tree->left);
			full += binary_tree_is_full(tree->right);
		}
	}
	return (full % 2);
}

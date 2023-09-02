#include "binary_trees.h"

/**
 * binary_tree_height - function that measure the height of a binary tree.
 * @tree: pointer to the root node of the binary tree to measure the height.
 *
 * Return: the height, or 0 if tree is null.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, l_height = 0, r_height = 0;

	if (tree)
	{
		l_height = binary_tree_height(tree->left) + 1;
		r_height = binary_tree_height(tree->right) + 1;
	}
	height = (l_height > r_height) ? l_height : r_height;
	return (height);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * | Perfect binary tree : defined as all levels of the tree are completely   |
 * |                       filled with nodes, except possibly the last level. |
 * |                       If the last level is not completely filled, it is  |
 * |                       filled from left to right.                         |
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @tree: pointer to the root node of a binary tree to check.
 *
 * Return: 1 if tree is perfect, or 0 if tree is null or not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect = 0;
	size_t l_height, r_height;

	if (tree)
	{
		l_height = binary_tree_height(tree->left);
		r_height = binary_tree_height(tree->right);

		if (l_height == r_height)
		{
			if (!tree->left && !tree->right)
				perfect = 1;
			else
				perfect = binary_tree_is_perfect(tree->left) &&
						binary_tree_is_perfect(tree->right);
		}
	}
	return (perfect);
}

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
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * + Balance factor : is a measure of the height difference between +
 * +                  left and right subtrees of the tree.          +
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @tree: pointer to the root node of a binary tree to measure
 * the balance factor.
 *
 * Return: the balance factor, or 0 if tree is null.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, l_height = 0, r_height = 0;

	if (tree)
	{
		l_height = binary_tree_height(tree->left);
		r_height = binary_tree_height(tree->right);
	}
	balance = l_height - r_height;
	return (balance);
}

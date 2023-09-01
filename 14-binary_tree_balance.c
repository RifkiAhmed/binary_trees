#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 * +++++++++++
 * Definition:
 *   Balance factor : is a measure of the height difference
 *   between left and right subtrees of the tree.
 * +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
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
		if (tree->left)
			l_height = binary_tree_balance(tree->left) + 1;
		if (tree->right)
			r_height = binary_tree_balance(tree->right) + 1;
	}
	balance = l_height - r_height;
	return (balance);
}

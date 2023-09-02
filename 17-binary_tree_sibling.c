#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * | Sibling of a node : is another node that shares the same parent  |
 * |                     of this node.                                |
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @node: pointer to the node to find the sibling.
 *
 * Return: pointer to the sibling node,, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
		if (node->parent)
		{
			if (node->parent->right != node)
				return (node->parent->right);
			else
				return (node->parent->left);
		}
	return (NULL);
}

#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the sibling of a node.
 *
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * | Unlce of a node : is defined as the sibling of the node's parent.|
 * ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 *
 * @node: pointer to the node to find the uncle.
 *
 * Return: pointer to the uncle node,, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
		if (node->parent)
			if (node->parent->parent)
			{
				if (node->parent->parent->right != node->parent)
					return (node->parent->parent->right);
				else
					return (node->parent->parent->left);
			}
	return (NULL);
}

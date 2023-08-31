#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the integer to store in the left-child
 *
 * Return: the pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (child)
	{
		if (parent->left)
		{
			child->left = parent->left;
			child->left->parent = child;
		}
		parent->left = child;
	}
	return (child);
}

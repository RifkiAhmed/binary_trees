#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the integer to store in the right-child
 *
 * Return: the pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);
	child = binary_tree_node(parent, value);
	if (child)
	{
		if (parent->right)
		{
			child->right = parent->right;
			child->right->parent = child;
		}
		parent->right = child;
	}
	return (child);
}

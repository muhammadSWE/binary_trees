#include "binary_trees.h"
/**
 *binary_tree_insert_right - Inserts a binary tree node to the right
 * of the parent node
 *@parent: A pointer to the parent of the node to create
 *@value: The value to put in the new node
 *
 *Return: If an error occurs - NULL
 *        Otherwise - a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}

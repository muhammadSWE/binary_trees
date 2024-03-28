#include "binary_trees.h"
/**
 *binary_tree_insert_left - Inserts a binary tree node to the left
 * of the parent node
 *@parent: A pointer to the parent of the node to create
 *@value: The value to put in the new node
 *
 *Return: If an error occurs - NULL
 *        Otherwise - a pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}

#include "binary_trees.h"
/**
 *binary_tree_insert_left - insert a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child
 *@value: value to store in the new node
 *
 *Return: If an error occurs - NULL
 *        Otherwise - a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftNode;

	if (parent == NULL)
		return (NULL);
	leftNode = malloc(sizeof(binary_tree_t));
	if (leftNode == NULL)
		return (NULL);
	leftNode->n = value;
	leftNode->parent = parent;
	leftNode->left = parent->left;
	leftNode->right = NULL;
	parent->left = leftNode;
	if (leftNode->left)
		leftNode->left->parent = leftNode;

	return (leftNode);
}

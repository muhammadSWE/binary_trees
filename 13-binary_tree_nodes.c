#include "binary_trees.h"
/**
 * binary_tree_nodes - counts internal nodes in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL else the number of internal nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}

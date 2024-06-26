#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL else the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);

	depth = 1;
	if (tree->parent)
		depth += binary_tree_depth(tree->parent);

	return (depth);
}

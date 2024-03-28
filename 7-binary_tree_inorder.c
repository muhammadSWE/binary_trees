#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointr to the root node of the tree to traverse
 * @func: function to apply
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}

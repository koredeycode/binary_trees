#include "binary_trees.h"
/**
 * binary_tree_height - return the tree's height
 * @tree: the binary tree to be measured
 * Return: the size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lh = 0;
		size_t rh = 0;

		if (tree->left)
			lh = 1 + binary_tree_height(tree->left);
		else
			lh = 0;
		if (tree->right)
			rh = 1 + binary_tree_height(tree->right);
		else
			rh = 0;
		if (lh > rh)
			return (lh);
		else
			return (rh);
	}
	return (0);
}

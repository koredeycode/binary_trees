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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		int lh = binary_tree_height(tree->left);
		int rh = binary_tree_height(tree->right);

		return (lh == rh && binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}

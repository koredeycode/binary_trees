#include "binary_trees.h"
/**
 * binary_tree_balance - measure the balance factor a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor or zero if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

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
			lh = 1;
		if (tree->right)
			rh = 1 + binary_tree_height(tree->right);
		else
			rh = 1;
		if (lh > rh)
			return (lh);
		else
			return (rh);
	}
	return (0);
}

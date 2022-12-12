#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: the leaves counts or zero if tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			count += 1;
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}
	return (count);
}

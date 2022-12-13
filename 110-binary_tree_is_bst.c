#include "binary_trees.h"
int is_sub_tree_lesser(const binary_tree_t *tree, int value)
{
	if (!tree)
		return(1);
	if (tree->n <= value && is_sub_tree_lesser(tree->left, value) && is_sub_tree_lesser(tree->right, value))
		return (1);
	return (0);
}
int is_sub_tree_greater(const binary_tree_t *tree, int value)
{
	if (!tree)
		return(1);
	if (tree->n > value && is_sub_tree_greater(tree->left, value) && is_sub_tree_greater(tree->right, value))
		return (1);
	return (0);
}
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (is_sub_tree_lesser(tree->left, tree->n) && is_sub_tree_greater(tree->right, tree->n) && binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right))
		return (1);
	return(0);
}

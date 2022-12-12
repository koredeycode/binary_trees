#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: a pointer to the node to be measured
 * Return: return  the height or zero if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent != NULL)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}

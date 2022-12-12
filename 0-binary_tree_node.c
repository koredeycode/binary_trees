#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree node
 * @parent: pointer to the parent of the node to be created
 * @value: the value to be put in the new node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);
	newNode->parent = parent;
	newNode->left = newNode->right = NULL;
	newNode->n = value;

	return (newNode);
}

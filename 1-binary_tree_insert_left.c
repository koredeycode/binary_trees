#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: pointer to the node that a left child is to be inserted
 * @value: the value to be put in the new node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}

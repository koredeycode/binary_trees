#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right child of another node
 * @parent: pointer to the node that a right child is to be inserted
 * @value: the value to be put in the new node
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);
	if (!newNode)
		return (NULL);
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}

#include "binary_trees.h"
/**
 * pop - remove the first element in the que;
 * @queue: the que datastructure
 */
void pop(queue_t **queue)
{
	queue_t *h;

	if (*queue == NULL)
	{
		return;
	}
	h = *queue;
	*queue = (*queue)->next;
	free(h);
}

/**
 * add_queue - add node to the head stack in queue mode
 * @queue: head of the stack
 * @node: new_value
*/
void add_queue(queue_t **queue, binary_tree_t *node)
{
	queue_t *new, *tmp;

	new = malloc(sizeof(queue_t));
	if (new == NULL)
	{
		return;
	}
	tmp = *queue;
	if (tmp == NULL)
	{
		new->node = node;
		new->next = NULL;
		new->prev = NULL;
		*queue = new;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		new->node = node;
		new->next = NULL;
		new->prev = tmp;
		tmp->next = new;
	}
}
/**
 * free_queue - free the queue from memory
 * @queue: the data to be freed
 */
void free_queue(queue_t *queue)
{
	queue_t *tmp;

	tmp = queue;
	while (queue)
	{
		tmp = queue->next;
		free(queue);
		queue = tmp;
	}
}
/**
 * binary_tree_levelorder - traverse a binary tree level by level
 * @tree: the binary tree to be traversed
 * @func: pointer to the function to be use on each node data
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *tmp = (binary_tree_t *)tree;
	queue_t *que;

	que = NULL;
	binary_tree_t *node;

	if (!tree || !func)
		return;
	add_queue(&que, tmp);
	while (que)
	{
		node = que->node;
		func(node->n);
		if (node->left)
			add_queue(&que, node->left);
		if (node->right)
			add_queue(&que, node->right);
		pop(&que);
	}
	free_queue(que);
}

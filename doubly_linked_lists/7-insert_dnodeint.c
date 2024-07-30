#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *                            in a doubly linked list.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added (0-based index).
 * @n: Data to be added in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current;
		new_node->prev = NULL;

	if (current)
	{
		current->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	}

	for (; current && i < idx - 1; i++, current = current->next);

	if (!current || (!current->next && i < idx - 1))
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next)
	{
		current->next->prev = new_node;
	current->next = new_node;
	}
	return (new_node);
}

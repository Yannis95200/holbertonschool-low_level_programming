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
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (current);
	}

	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}

	current->next = new_node;

	return (new_node);
}


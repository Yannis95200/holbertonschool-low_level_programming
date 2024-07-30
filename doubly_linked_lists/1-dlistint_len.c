#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Description: This function iterates through a doubly linked list and
 *              counts the number of nodes.
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description: This function traverses the doubly linked list and frees
 *              each node in the list. The memory for the nodes is freed
 *              one by one until all nodes are released.
 */



void free_dlistint(dlistint_t *head)
{

	dlistint_t *current;
	dlistint_t *new_node;

	current = head;

	while (current != NULL)
	{
		new_node = current->next;
		free(current);
		current = new_node;
	}
}

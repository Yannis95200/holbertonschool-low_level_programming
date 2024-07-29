#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*free_list - Frees a list_t list.
*@head: Pointer to the head of the list to be freed.
*Description: This function iterates through a linked list and frees
*	each node, including the string stored in the node.
*/

void free_list(list_t *head)
{
	list_t *current;
	list_t *new_node;

	current = head;

	while (current != NULL)
	{
		new_node = current->next;
		free(current->str);
		free(current);
		current = new_node;
	}
}

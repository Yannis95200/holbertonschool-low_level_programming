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
	list_t *new_node;

	while (head != NULL)

	new_node = head->next;
	free(head->str);
	free(head);
	head = new_node;
}

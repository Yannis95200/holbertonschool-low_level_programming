#include <stdio.h>
#include "lists.h"
/**
*print_list - Prints all the elements of a list_t list.
* @h: Pointer to the list_t list to print.
* Description: This function iterates through a linked list and prints
*	each element's string and length. If a string is NULL,
*	it prints "[0] (nil)".
*Return: The number of nodes in the list.
**/
size_t print_list(const list_t *h)
{
	int counter_node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
		counter_node++;
		h = h->next;

	}
	return (counter_node);
}

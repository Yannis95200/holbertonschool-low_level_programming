#include "lists.h"
#include <stdio.h>
/**
 *list_len - Returns the number of elements in a linked list_t list.
 *@h: Pointer to the head of the list.
 *Description: This function iterates through a linked list and counts
 *		the number of elements (nodes) in the list.
 *Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}

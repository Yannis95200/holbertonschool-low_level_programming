#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Retrieves the node at a
 *                         specific index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve (0-based index).
 *
 * Description: This function traverses the doubly linked list
 *              to find and return the node at the specified index.
 *              If the index is out of bounds,it returns NULL.
 * Return: Pointer to the node at the specified index,
 *         or NULL if the index is out of bounds.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
			i++;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (head);

}





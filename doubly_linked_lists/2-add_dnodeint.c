#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @n: Integer to store in the new node.
 *
 * Description: This function creates a new node and adds it to the beginning
 *              of a doubly linked list. The new node's next pointer is set
 *              to the current head, and if the head is not NULL, the head's
 *              previous pointer is set to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */



dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

		new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

			*head = new_node;

			return (new_node);
}

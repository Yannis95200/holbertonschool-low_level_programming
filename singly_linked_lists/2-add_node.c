#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and added to the new node
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;
	char *str_dup;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str_dup[length] != '\0')
		length++;

	new_node->str = str_dup;
	new_node->len = length;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

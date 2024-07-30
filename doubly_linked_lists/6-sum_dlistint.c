#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Calculates the sum of all the data (n)
 *                in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Description: This function traverses the doubly linked list and sums up
 *              the values of the `n` field of each node.
 *              It returns the total sum.
 * Return: The total sum of all the `n` values in the list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}


	return (sum);
}

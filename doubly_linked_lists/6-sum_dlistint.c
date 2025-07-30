#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * sum_dlistint - returns sum of all data (n) of a linked list
 * @head: pointer to head of list
 *
 * Return: int sum or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* to sum n in all nodes */

	if (head == NULL) /* check if list is empty */
	{
		return (0);
	}

	while (head != NULL) /* traverse list until end */
	{
		sum = sum + head->n; /* add n to sum */
		head = head->next; /* move head to next node */
	}

	return (sum); /* return total sum */
}

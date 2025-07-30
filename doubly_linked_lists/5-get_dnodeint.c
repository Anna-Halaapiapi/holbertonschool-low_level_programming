#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to head of list
 * @index: index of node starting from 0
 * Return: nth node or NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0; /* counter for list traversal */
	dlistint_t *currentnode = head;/* point currentnode to node 1 in list */

	while (counter < index && currentnode != NULL) /* traverse the list */
	{
		currentnode = currentnode->next;/* move to next node */
		counter = counter + 1;
	}

	return (currentnode); /* return the nth node */
}

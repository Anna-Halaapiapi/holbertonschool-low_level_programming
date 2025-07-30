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
	int counter = 0;
	dlistint_t *currentnode = head;

	while (counter < index)
	{
		currentnode = currentnode->next;
		counter = counter + 1;
	}

	return (currentnode->next);
}

#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * delete_dnodeint_at_index - deletes node at a given position
 * @head: double pointer to head
 * @index: index of list where new node should be deleted (starts at 0)
 *
 * Return: 1 (success) or -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0; /* counter for list traversal */
	dlistint_t *prevnode = *head; /* node prev to node to be deleted */
	dlistint_t *nextnode; /* node after node to be deleted */
	dlistint_t *delnode; /* node to be deleted */

	while (counter < (index - 1) && prevnode != NULL) /* find prevnode */
	{
		prevnode = prevnode->next;
		counter = counter + 1;
	}

	if (prevnode == NULL) /* check if index longer than list length */
	{
		return (-1);
	}

	delnode = prevnode->next; /* find node to be deleted */
	nextnode = delnode->next; /* find node after node to be deleted */

	prevnode->next = nextnode; /* update pointers */
	nextnode->prev = prevnode;

	free(delnode); /* free the node to be deleted from memory */

	return (1); /* return 1 for success */
}

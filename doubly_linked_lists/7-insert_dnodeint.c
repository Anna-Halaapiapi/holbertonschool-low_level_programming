#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: double pointer to head
 * @idx: index of list where new node should be inserted (starts at 0)
 * @n: integer data for new node
 *
 * Return: address of newnode or NULL (failure)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0; /* to traverse list */
	dlistint_t *prevnode = *h; /* to store prevnode to newnode */
	dlistint_t *nextnode; /* to store nextnode to newnode */
	dlistint_t *newnode;

/* call add_dnodeint to add node to start of list if required */
	if (idx == 0)
	{
		return(add_dnodeint(h, n));
	}

/* traverse list to find prev node for newnode */
	while (counter < (idx - 1) && prevnode != NULL)
	{
		prevnode = prevnode->next; /* move to next node */
		counter = counter + 1;
	}
/* check if idx greater than list length */
	if (prevnode == NULL)
	{
		return (NULL);
	}

/* call add_dnodeint_end to add node to end of list if required */
	if (prevnode->next == NULL)
	{
		return(add_dnodeint_end(h, n));
	}

	nextnode = prevnode->next;

/* malloc newnode and check for failure */
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

/* assign n to newnode */
	newnode->n = n;

/* update all pointers to insert newnode */
	prevnode->next = newnode;
	nextnode->prev = newnode;
	newnode->prev = prevnode;
	newnode->next = nextnode;

	return (newnode);
}

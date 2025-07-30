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
/* to traverse list */
	unsigned int counter = 0;
	dlistint_t *prevnode = *h; /* start at node 1 */
	dlistint_t *nextnode;
	dlistint_t *newnode;

/* call 2-add_dnodeint.c if idx is 0 to add at start of list*/
	if (idx == 0)
	{
		return(add_dnodeint(h, n));
	}

/* malloc newnode and check for failure */
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

/* assign n to newnode */
	newnode->n = n;

/* traverse list to find prev node for newnode */
	while (counter < idx && prevnode != NULL)
	{
		prevnode = prevnode->next; /* move to next node */
		counter = counter + 1;
	}

/* find next node for newnode */
	nextnode = prevnode->next;

/* update all pointers to insert newnode */
	prevnode->next = newnode;
	nextnode->prev = newnode;
	newnode->prev = prevnode;
	newnode->next = nextnode;

	return (newnode);
}

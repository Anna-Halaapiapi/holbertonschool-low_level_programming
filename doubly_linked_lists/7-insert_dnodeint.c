#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: double pointer to head
 * @idx: index of list where new node should be inserted (starts at 0)
 * @n: integer data for new node
 * Return: address of newnode or NULL (failure)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0; /* counter to traverse list */
	dlistint_t *prevnode = *h; /* to store prevnode to newnode */
	dlistint_t *nextnode; /* to store nextnode to newnode */
	dlistint_t *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));/*helper to add node to list start*/

	while (counter < (idx - 1) && prevnode != NULL) /* find prevnode */
	{
		prevnode = prevnode->next; /* move to next node */
		counter = counter + 1;
	}
	if (prevnode == NULL) /* check if idx is longer than list length */
		return (NULL);

	if (prevnode->next == NULL) /* helper to add node to end of list */
		return (add_dnodeint_end(h, n));

	nextnode = prevnode->next; /* find nextnode */

	newnode = malloc(sizeof(dlistint_t));/* malloc & failcheck for newnode*/

	if (newnode == NULL)
		return (NULL);

	newnode->n = n; /* set n in newnode */

	prevnode->next = newnode; /* update all pointers to insert newnode */
	nextnode->prev = newnode;
	newnode->prev = prevnode;
	newnode->next = nextnode;

	return (newnode);
}

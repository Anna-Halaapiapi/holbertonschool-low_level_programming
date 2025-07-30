#include "lists.h"
#include <string.h> /* for strdup */
#include <stdlib.h> /* for malloc, NULL */

/**
 * add_dnodeint_end - adds a new node to end of list
 * @head: double pointer to head of list
 * @n: integer to store in node
 *
 * Return: address of new element or NULL (failure)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end; /* to traverse list and find the end */

	dlistint_t *newnode = malloc(sizeof(dlistint_t)); /* malloc newnode */

	if (newnode == NULL) /* check for malloc failure */
	{
		return (NULL);
	}

	newnode->n = n; /* store n in newnode */
	newnode->next = NULL; /* point newnode to NULL to mark end of list */

	if (*head == NULL) /* handle empty list */
	{
		*head = newnode; /* point head to newnode */
		newnode->prev = NULL; /* point newnode prev to NULL */
		return (newnode);
	}

	else /* else list not empty - point end to first node in list */
	{
		end = *head;
	}

	while (end->next != NULL) /* traverse list to find end */
	{
		end = end->next; /* point end to next node */
	}

	end->next = newnode; /* add newnode to end of list */

	newnode->prev = end; /* point newnode prev to end */

	return (newnode); /* return address of new node */
}

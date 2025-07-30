#include "lists.h"
#include <string.h> /* for strdup & strlen */
#include <stdlib.h> /* for malloc, NULL */

/**
 * add_dnodeint - adds a new node to beginning of a doubly linked list
 * @head: double pointer to head of list
 * @n: pointer to integer data in node
 *
 * Return: address of new element or NULL (failure)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t)); /* malloc new node */

	if (newnode == NULL) /* check for malloc failure */
	{
		return (NULL);
	}

	newnode->n = n; /* set data in newnode */
	newnode->prev = NULL; /* point newnode prev to NULL */
	newnode->next = *head; /* point newnode next to old first node */

	if (*head != NULL)/* check if list is empty */
	{
		*head->prev = newnode;/* point old first node prev to newnode */
	}
	*head = newnode; /* point head to newnode */

	return (newnode); /* return address of new element */
}

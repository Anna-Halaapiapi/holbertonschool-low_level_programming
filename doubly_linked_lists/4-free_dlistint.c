#include "lists.h"
#include <stdlib.h> /* for malloc, NULL */

/**
 * free_dlistint - function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *current = head; /* to store current node */
	dlistint_t *nextnode; /* to store next node */

	while (current != NULL)
	{
		nextnode = current->next; /* save pointer to next node */
		free(current); /* free current node */
		current = nextnode; /* move to next node */
	}
}

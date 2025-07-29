#include "lists.h"
#include <stdlib.h> /* for malloc, NULL */

/**
 * free_list - function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head; /* to store current node */
	list_t *nextnode;/* to store next node */

	while (current != NULL)
	{
		nextnode = current->next; /* save pointer to next node */
		free(current->str);/* free string in current node */
		free(current); /* free current node */
		current = nextnode; /* move to next node */
	}
}

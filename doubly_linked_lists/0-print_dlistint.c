#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints all elements of linked list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
/* keeps a count of number of nodes */
	size_t count = 0;

/* loop through list, print elements, count nodes */
	while (h != NULL)
	{
		printf("%d", h->n);
		count = count + 1;
		h = h->next;
	}

/* return number of nodes */
	return (count);
}

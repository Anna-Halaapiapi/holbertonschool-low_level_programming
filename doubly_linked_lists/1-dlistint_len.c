#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: pointer to head of linked list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
/* counter for number of elements */
	size_t count = 0;

/* loop through list and count elements */
	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
/* return number of elements */
	return (count);
}

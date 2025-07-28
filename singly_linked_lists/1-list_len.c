#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to head of list_t list
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	unsigned int num; /* keep track of number of elements */

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num); /* return number of elements */
}

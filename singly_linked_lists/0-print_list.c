#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to head of list_t list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /* keeps track of number of nodes */

/* loop through list and print */
	while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}

		else
		{
			printf("%u %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}

/* return number of nodes in list */
	return (count);
}

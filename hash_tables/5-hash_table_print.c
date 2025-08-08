#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0; /* start array index at 0 */
	hash_node_t *node; /* tracker for nodes in list */

	if (ht == NULL) /* check for NULL */
		return;

	node = ht->array[index]; /* start node at first node of list */

	/* loop through buckets/array */
	while (ht->array[index] < ht->size)
	{

		/* loop through nodes in list */
		while (node != NULL)
		{
			/* print key & value in node */
			printf("/'%s/' : /'%s/',", node->key, node->value);
			node = node->next; /* move to next node */
		}

		index++; /* move to next bucket */
	}
}

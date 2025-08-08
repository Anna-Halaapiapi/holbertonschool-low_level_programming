#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0; /* start array index at 0 */
	hash_node_t *node, *nextnode; /* trackers for nodes in list */

	if (ht == NULL) /* check for NULL */
		return;

	while (index < ht->size) /* loop through array & free nodes */
	{
		node = ht->array[index]; /* start at 1st node in list */

		while (node != NULL) /* loop through nodes in list */
		{
			free(node->key);
			free(node->value);
			nextnode = node->next;
			if (nextnode == NULL)
			{
				free(node);
				break;
			}
			free(node);
			node = nextnode; /* move to next node */
		}

		index++; /* move to next in array */
	}

	index = 0; /* reset index */

	free(ht->array);/* free array */
	free(ht); /* free table */

}

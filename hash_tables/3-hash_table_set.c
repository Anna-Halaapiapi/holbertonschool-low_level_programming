#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: value associated with key
 *
 * Return: 1 (success) or 0 (fail)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index; /* index of key */
	hash_node_t *new_node, *node;

	if (key == NULL || ht == NULL) /* check for NULL */
		return (0);

	index = key_index(key, ht->size);/*find key's index (bucket to search)*/

	node = ht->array[index]; /* start at first node of list/bucket */

	/* search list for key */
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0) /* if key is found */
		{
			free(node->value); /* free existing value */
			node->value = strdup(value);/* update value */
			return (1); /* return success */
		}

		node = node->next; /* go to next node in list */
	}
		/* key not found - create new node */
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL) /* if malloc fails */
		{
			return (0); /* return fail */
		}
		new_node->key = strdup(key);/* set values of new node */
		new_node->value = strdup(value);
		/* insert node at start of list */
		new_node->next = ht->array[index];
		ht->array[index] = new_node;

	return (1);
}

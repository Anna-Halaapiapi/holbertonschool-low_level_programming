#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 *
 * Return: value associated with key or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t bucket; /* find index of bucket */

	if (ht == NULL || key == NULL) /* check for NULL */
		return (NULL);

	bucket = ht->array[index]; /* start node at bucket/first node of list */

	while (bucket != NULL) /* search list for key */
	{
		if (bucket->key == key) /* if key is found */
		{
			return (bucket->value); /* return value */
		}

		bucket = bucket->next; /* move to next node */
	}

	return (NULL); /* key not found */
}

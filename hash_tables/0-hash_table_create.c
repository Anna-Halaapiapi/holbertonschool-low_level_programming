#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to newly created table or NULL (failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table; /* pointer to hash table */
	unsigned long int i = 0; /* loop counter */

	if (size == 0) /* check size */
		return (NULL);

	new_table = malloc(sizeof(hash_table_t)); /* malloc new table */

	if (new_table == NULL) /* handle failure */
		return (NULL);

	new_table->size = size; /* set size of new table */

	/* malloc for nodes */
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL) /* handle failure */
	{
		free(new_table);
		return (NULL);
	}

	/* initialise array at NULL */
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}

	return (new_table); /* pointer to new table */
}

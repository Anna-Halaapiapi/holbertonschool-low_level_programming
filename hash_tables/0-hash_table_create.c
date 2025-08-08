#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to newly created table or NULL (failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t new_table;

	if (size == NULL)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

}

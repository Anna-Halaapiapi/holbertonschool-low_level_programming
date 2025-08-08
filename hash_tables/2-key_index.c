#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * key_index - gives index of a key using hash_djb2
 * @key: the key
 * @size: size of arrae
 *
 * Return: index where key is stored in table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* index of key */
	unsigned long int index = hash_djb2(key) % size;

	/* return index of key */
	return (index);
}

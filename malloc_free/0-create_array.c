#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */

/**
 * create_array - creates an array of chars, initialises with specific char
 * @size: size of array
 * @c: specific char
 * Return: pointer to array or NULL (size is 0 or if fails)
 */

char *create_array(unsigned int size, char c)
{
/* declare pointer to array */
	char *array;
/* declare index for loop */
	unsigned int index = 0;

/* return NULL if size is 0 */
	if (size == 0)
	{
		return (NULL);
	}
/* allocate memory for array */
	array = malloc(size * sizeof(char));

/* return NULL if array is NULL */
	if (array == NULL)
	{
		return (NULL);
	}
/* loop through array and initialise with c */
	while (array[index] < size)
	{
		array[index] = c;
		index = index + 1;
	}

/* return pointer to array */
	return (array);
}

#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */

/**
 * _calloc - allocates memory for an array and initialises array to 0
 * @nmemb: number of elements
 * @size: size of each element in bytes
 * Return: pointer to allocated memory or NULL (fail)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
/* vars */
	char *memory; /* pointer to memory */
	unsigned int index = 0;

/* return NULL if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

/* malloc the array */
	memory = malloc(nmemb * size);

/* check if malloc fails */
	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}

/* intialise array to 0 */
	while (index < nmemb * size)
	{
		memory[index] = 0;
		index = index + 1;
	}

/* return pointer to allocated memory */
	return (memory);
}

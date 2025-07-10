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
	unsigned int *memory; /* pointer to memory */
	unsigned int index;

/* return NULL if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

/* malloc the array */
	memory = malloc(nmemb * sizeof(size));

/* check if malloc fails */
	if (memory == NULL)
	{
		free(memory);
		return (NULL);
	}

/* intialise array to 0 */
	while (memory[index] <= nmemb)
	{
		memory[index] = 0;
		index = index + 1;
	}

/* return pointer to allocated memory */
	return (memory);
}

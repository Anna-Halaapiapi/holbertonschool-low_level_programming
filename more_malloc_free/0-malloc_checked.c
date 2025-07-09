#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc, free & exit */

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of elements required
 * Return: pointer to allocated memory or status value 98 (fail)
 */

void *malloc_checked(unsigned int b)
{
	int *memory; /* pointer to allocated memory */

	memory = malloc(sizeof(int *) * b); /* malloc */

	if (memory == NULL) /* malloc check */
	{
		exit(98); /* exit upon failure */
	}

	return (memory); /* return pointer to allocated memory */
}

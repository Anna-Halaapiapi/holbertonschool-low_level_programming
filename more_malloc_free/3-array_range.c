#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */

/**
 * array_range - creates an array if ints, ordered from min to max
 * @min: start number of array (included)
 * @max: end number of array (included)
 * Return: pointer to new array or NULL (fail)
 */

int *array_range(int min, int max)
{
/* vars */
	int *memory;
	int arrsize, index = 0;

/* if min > max = return NULL */
	if (min > max)
	{
		return (NULL);
	}

/* calculate how much memory is needed */
	arrsize = max - min + 1;

/* malloc */
	memory = malloc(arrsize);

/* malloc check - if malloc fails return NULL */
	if (memory == NULL)
	{
		return (NULL);
	}

/* innitialise array */
	while (index <= arrsize)
	{
		memory[index] = min;
		min = min + 1;
		index = index + 1;
	}

/* return pointer to new array */
	return (memory);

}

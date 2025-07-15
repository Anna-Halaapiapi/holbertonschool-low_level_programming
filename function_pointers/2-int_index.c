#include "function_pointers.h"
#include <stdlib.h> /* for malloc, free, exit, NULL */


/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: compares integers
 * Return: index of matching int, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	while (index < size)
	{
	cmp(array[index]);
	if (cmp(array[index]) == 1)
	{
	return (index);
	}
	index = index + 1;
	}
	return (-1);
}

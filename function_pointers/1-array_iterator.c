#include "function_pointers.h"
#include <stdlib.h> /* for malloc, free, exit */

/**
 * array_iterator - executes a function given as a parameter on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index = 0; /* keep track of arr index position */

	while (index < size)/*loop through each elem of arr and execute action*/
	{
		action(array[index]);
		index = index + 1;
	}
}

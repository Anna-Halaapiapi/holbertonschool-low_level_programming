#include "main.h"

/**
 * swap_int - swaps values of 2 ints
 * @a: pointer to first int
 * @b: pointer to second int
 * Return: void
 */

void swap_int(int *a, int *b)

{
/* declare var to hold a value temporarily */
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of a square matrix of ints
 * @a: pointer to array
 * @size: size of rows/columns in square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
/* keep track of diagonal sums */
	int d1 = 0;
	int d2 = 0;

/* keep track of index position */
	int index = 0;

/* loop for diagonal value 1 */
	while (index < size * size)
	{
		d1 = d1 + a[index];
		index = index + size + 1;
	}

/* reset index position to first value of d2 */
	index = size - 1;

/* loop for diagonal value 2 */
	while (index <= size * (size - 1))
	{
		d2 = d2 + a[index];
		index = index + size - 1;
	}

	printf("%d, ", d1);
	printf("%d\n", d2);
}

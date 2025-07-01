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

/* keep track of row/col position */
	int row = 0;
	int col = 0;

/* loop for diagonal value 1 */
	while (row < size)
	{
		d1 = d1 + a[row][column];
		col = col + 1;
		row = row + 1;
	}

/* starting index positions for 2nd loop */
	col = 0;
	row = size - 1;

/* loop for diagonal value 2 */
	while (col < size)
	{
		d2 = d2 + a[row][col];
		col = col + 1;
		row = row - 1;
	}

	printf("%d, ", d1);
	printf("%d", d2);
}

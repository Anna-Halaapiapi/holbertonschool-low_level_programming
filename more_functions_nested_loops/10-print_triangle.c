#include "main.h"

/**
 * print_triangle - prints triangle using #
 * @size: size of triangle
 * Return: triangle using #
 */

void print_triangle(int size)
{
	int count = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

/* outer loop for rows/size */
	while (count < size)
	{
		int width = 0;


/* inner loop for columns to print spaces and '#' */
		while (width < size - count - 1)
		{
			_putchar(' ');
			width = width + 1;
		}

		width = 0;

		while (width < count + 1)
		{
			_putchar('#');
			width = width + 1;
		}
		_putchar('\n');
		count = count + 1;
	}

}

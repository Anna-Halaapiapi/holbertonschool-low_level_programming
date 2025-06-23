#include "main.h"

/**
 * print_square - prints square using #
 * @size: size of square
 * Return: square using #
 */

void print_square(int size)
{
	int count = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
/* outer loop for rows/size */
	while (size > count)
	{
		int width = 0;


/* inner loop for columns / width of square */
		while (width < size)
		{
			_putchar('#');
			width = width + 1;
		}
		count = count + 1;
		_putchar('\n');
	}
}

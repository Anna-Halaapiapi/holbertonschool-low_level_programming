#include "main.h"

/**
 * print_diagonal - draws diagonal line when n > 0
 * @n: number of times '\' should be printed
 * Return: printed '\' in terminal with new line
 */


void print_diagonal(int n)

{
	int count = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (count < n)
	{
		int col = 0;

		while (col < count)
	{

		_putchar(' ');
		col = col + 1;
	}
		_putchar('\\');
		_putchar('\n');

		count = count + 1;
	}
}

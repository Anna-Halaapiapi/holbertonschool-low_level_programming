#include "main.h"

/**
 * print_diagonal - draws diagonal line when n > 0
 * @n: number of times '\' should be printed
 * Return: printed '\' in terminal with new line
 */


void print_diagonal(int n)

{
	int count = 0;
	char c = ' ';

	while (count < n)
	{
		_putchar(c);
		count = count + 1;
	}
	_putchar('\\');
	_putchar('\n');
}

#include "main.h"

/**
 * print_line - prints '_' in terminal if n is positive
 * @n: number of times '_' should be printed
 * Return: printed line in terminal with new line
 */

void print_line(int n)

{

	char c = '_';
	int count = 0;

	while (count < n)
	{
		_putchar(c);
		count = count + 1;
	}
	_putchar('\n');
}

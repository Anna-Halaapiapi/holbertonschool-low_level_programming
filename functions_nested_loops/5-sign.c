#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number for checking
 * Return:
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar('1');
		_putchar('\n');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar('-');
		_putchar('1');
		_putchar('\n');
		return (-1);
	}
}

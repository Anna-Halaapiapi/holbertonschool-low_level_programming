#include "main.h"

/**
 * print_numbers - prints digits (0-9)
 *
 * Return: printed numbers 0-9 and new line
 */

void print_numbers(void)

{

	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n = n + 1;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: stores n for checking
 * Return: absolute value of last digit of n
 */

int print_last_digit(int n)
{
	int lastdigit;
	lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar('0' + lastdigit);

	return (lastdigit);
}

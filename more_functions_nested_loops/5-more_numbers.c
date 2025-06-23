#include "main.h"

/**
 * more_numbers - prints numbers 0-14
 *
 * Return: prints numbers 0-14, new line, over 10 rows
 */

void more_numbers(void)
{
	int r = 1;

/* outer loop for 10 rows */
while (r <= 10)
{
	int c = 0;

/* inner loop for cols */
	while (c <= 14)
	{
		if (c >= 10)
		{
			_putchar('0' + c / 10);
		}

	_putchar('0' + c % 10);
	c = c + 1;
	}

	_putchar('\n');
	r = r + 1;
}
}

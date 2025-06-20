#include "main.h"

/**
 * times_table - prints 9 times table starting at 0
 *
 * Return: 9 lines of times tables from 0
 */

void times_table(void)

{
/* n1 = original num; n2 = multiplier num */
	int n1 = 0;
	int n2 = 0;
/* n3 = multiplied number */
	int n3 = 0;

/* outer loop for n1 */
	while (n1 < 10)
	{
		n2 = 0;
/* inner loop for n2 */
	while (n2 < 10)
	{
/* calc value of n3 */
		n3 = n2 * n1;
/* print single or double digits */
		if (n3 >= 10)
		{
		_putchar('0' + n3 / 10);
		_putchar('0' + n3 % 10);
		}
		else
		{
		_putchar('0' + n3);
		if (n2 !=0)
			_putchar(' ');
		}
/* dont put a ', ' if n2 is 9 (end of line) */
		if (n2 != 9)
		{
			_putchar(',');
			_putchar(' ');
		}

	n2 = n2 + 1;
	}
	_putchar('\n');
	n1 = n1 + 1;
	}
}

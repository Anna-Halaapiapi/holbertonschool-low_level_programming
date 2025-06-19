#include "main.h"

/**
 * _islower - returns 1 for lowercase c else returns 0
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}

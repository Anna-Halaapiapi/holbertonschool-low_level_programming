#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: result of calculation or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
/* keep track of the result of calc */
	int result = 0;

/* error for y less than 0 */
	if (y < 0)
	{
		return (-1);
	}
/* edge case */
	if (y == 0)
	{
		return (1);
	}

/* recursion */
	if (y != 0)
	{
		return x * y(x, y - 1);
	}
}

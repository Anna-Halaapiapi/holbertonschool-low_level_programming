#include "main.h"
/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: result of calculation or -1 if y < 0
 */

int _pow_recursion(int x, int y)
{

	int result = 1;

/* error for y less than 0 */
	if (y < 0)
	{
		return (-1);
	}
/* edge case */
	if (y == 0)
	{
		return (result);
	}

/* recursion */
	if (y != 0)
	{
		result = _pow_recursion(x, (y - 1));
	}
	return (result);
}

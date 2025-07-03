#include "main.h"
/* Extra function to use more parameters */
/**
 * _sqrt_extra_function - extra function to use more parameters in recursion
 * @n: current remainder after subtracting odd
 * @odd: current odd number to subtract
 * @sqrt: the square root (how many subtractions are made)
 * Return: square root if natural, else -1 (error)
 */

int _sqrt_extra_function(int n, int odd, int sqrt)
{
/* if n has a natural square root - return how many times we subtracted odd */
	if (n == 0)
	{
		return (sqrt);
	}
/* if n doesn't have a natural square root - return error */
	if (n < 0)
	{
		return (-1);
	}
/* recursion to return updated n, odd and sqrt values in next function */
	return (_sqrt_extra_function(n - odd, odd + 2, sqrt + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: square root of n, or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
/* if n is less than 0 - return error */
	if (n < 0)
	{
		return (-1);
	}
/* call the extra function to compute sqrt calculation */
	else
	{
	return (_sqrt_extra_function(n, 1, 0));
	}
}

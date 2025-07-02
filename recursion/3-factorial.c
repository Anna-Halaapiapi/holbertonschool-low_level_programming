#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: number
 * Return: factorial or -1 if n less than 0
 */

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

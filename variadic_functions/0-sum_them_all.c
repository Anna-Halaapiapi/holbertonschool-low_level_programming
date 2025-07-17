#include "variadic_functions.h"
#include <stdlib.h> /* for malloc, free & exit */
#include <stdarg.h> /* for va_start, va_arg, and va_end */

/**
 * sum_them_all - function that calculates sum of all parameters
 * @n: number of parameters
 * Return: int sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int index = 0;
	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	while (index < n)
	{
		sum = sum + va_arg(list, unsigned int);
		index = index + 1;
	}

	va_end(list);

	return (sum);
}

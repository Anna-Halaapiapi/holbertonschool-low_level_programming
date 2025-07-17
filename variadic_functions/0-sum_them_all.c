#include "variadic_functions.h"
#include <stdlib.h> /* for malloc, free & exit */
#include <stdarg.h> /* for va_start, va_arg, and va_end */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int index = 0;

	if (n == 0)
	{
		return (0);
	}
	va_list list;

	while (index < n)
	{
		sum = sum + va_arg(list, unsigned int);
		index = index + 1;
	}

	va_end(list);

	return (sum);
}

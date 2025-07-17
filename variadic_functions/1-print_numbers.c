#include "variadic_functions.h"
#include <stdlib.h> /* for malloc, free & exit */
#include <stdarg.h> /* for va_start, va_arg, and va_end */
#include <stdio.h> /* for printf */

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
	{
		separator = "";
	}

	if (n == 0)
	{
		printf("\n");
		return;
	}

	while (index < (n - 1))
	{
		printf("%d%s", va_arg(list, unsigned int), separator);
		index = index + 1;
	}
	printf("%d\n", va_arg(list, unsigned int));

	va_end(list);
}

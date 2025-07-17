#include "variadic_functions.h"
#include <stdlib.h> /* for malloc, free & exit */
#include <stdarg.h> /* for va_start, va_arg, and va_end */
#include <stdio.h> /* for printf */

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	char *string; /* temp pointer to hold va_args value */
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
		string = va_arg(list, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		printf("%s", separator);

		index = index + 1;
	}
	printf("%s\n", va_arg(list, char *));

	va_end(list);
}

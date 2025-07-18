#include "variadic_functions.h"
#include <stdlib.h> /* for malloc, free & exit */
#include <stdarg.h> /* for va_start, va_arg, and va_end */
#include <stdio.h> /* for printf */

/**
 * print_char - prints a character.
 * @list: pointer to va_list to access variable arguments.
 * Return: void
 */
void print_char(va_list *list)
{
	printf("%c", va_arg(*list, int));
}
/**
 * print_int - prints an integer.
 * @list: pointer to va_list to access variable arguments.
 * Return: void
 */
void print_int(va_list *list)
{
	printf("%d", va_arg(*list, int));
}
/**
 * print_float - prints a float.
 * @list: pointer to va_list to access variable arguments.
 * Return: void
 */
void print_float(va_list *list)
{
	printf("%f", va_arg(*list, double));
}
/**
 * print_string - prints a string.
 * @list: pointer to va_list to access variable arguments.
 * Return: void
 */
void print_string(va_list *list)
{
	char *str = va_arg(*list, char *);

	str = str ? str : "(nil)"; /* if str NULL - replace with (nil) */
	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: void
 */

void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_list list;
	int i = 0; /* format chars index tracker */
	int j; /* ops struct array index tracker */
	int printed = 0; /* track if something has already been printed */

	va_start(list, format);

	while (format != NULL && format[i] != '\0') /*loop for chars in format*/
	{
		j = 0;

		while (j < 4) /* loop for ops/function list */
		{
			if (format[i] == ops[j].op) /* if match found */
			{
				if (printed != 0) /* print seps before args */
				{
					printf(", ");
				}
				ops[j].f(&list); /* call appropriate function */
				printed = 1;
				break; /* exit inner loop after match printed */
			}
			j = j + 1;
		}
		i = i + 1;
	}

	printf("\n");
	va_end(list);
}

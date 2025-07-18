#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h> /* for va_start, va_arg, and va_end */

/* custom header */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/* for task 3 */
/**
 * struct op - struct to match format specifier to function
 * @op: character in format (c, i, f, s)
 * @f: pointer to required function
 */

typedef struct op
{
	char op;
	void (*f)(va_list *list);
} op_t;

void print_all(const char * const format, ...);
void print_char(va_list *list);
void print_int(va_list *list);
void print_float(va_list *list);
void print_string(va_list *list);

#endif

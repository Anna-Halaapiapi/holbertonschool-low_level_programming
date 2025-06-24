#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to string s
 * Return: void
 */

void print_rev(char *s)

{
/* save starting address of s */
	char *start = s;

/* find length of the string, s pointer moves to null */

	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s = s + 1;
	}
/* bring pointer back one from null to last char of string */
	s = s - 1;

/* print string in reverse */
		while (s >= start)
		{
			_putchar(*s);
			s = s - 1;
		}
	_putchar('\n');
}

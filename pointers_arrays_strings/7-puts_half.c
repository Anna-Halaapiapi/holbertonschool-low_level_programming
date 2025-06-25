#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: pointer to string str
 * Return: void
 */

void puts_half(char *str)
{
	int halflength;
/* save starting address of str */
	char *start = str;

/* find the length of the string */
	int length = 0;

	while (*str != '\0')
	{
		length = length + 1;
		str = str + 1;
	}
/* note - pointer str is at null term after this loop - reset str to start */
str = start;

/* find half length for even and odd strings */
if (length % 2 == 00)
{
	halflength = length / 2;
}
else
{
halflength = (length + 1) / 2;
}

/* move pointer to mid point */
str = start + halflength;

/* print from mid point to null term */
while (*str != '\0')
{
	_putchar(*str);
	str = str + 1;
}
_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to string str
 * Return: void
 */

void puts2(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
/* move fwd 1 character at a time to check if it's null term */
		str = str + 1;
		if (*str == '\0')
		{
			break;
		}
		else
		{
			str = str + 1;
		}
	}
}

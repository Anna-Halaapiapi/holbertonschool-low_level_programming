#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length = _strlen_recursion(s + 1);
		length = length + 1;
	}
	return (length);
}

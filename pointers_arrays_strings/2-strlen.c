#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string s
 * Return: length of string as int
 */

int _strlen(char *s)

{
	int counter = 0;

	while (*s != '\0')
	{
		counter = counter + 1;
		s = s + 1;
	}

	return (counter);
}

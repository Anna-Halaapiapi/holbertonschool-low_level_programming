#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: pointer to string
 * @c: char to locate or NULL if char not found
 * Return: pointer to first occurrence of char
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
/* check if c is found */
		if (*s == c)
		{
			return (s);
		}
		s = s + 1;
	}
/* return NULL if no c found */
	return (NULL);
}

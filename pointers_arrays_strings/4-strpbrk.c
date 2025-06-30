#include "main.h"
#include <stddef.h> /* for NULL */

/**
 * _strpbrk - locates first instance in s of bytes from accept
 * @s: pointer to string to search
 * @accept: chars to check
 * Return: pointer to first match in s or NULL if no matches found
 */

char *_strpbrk(char *s, char *accept)

{
/* copy accept to use in loops */
	char *acceptcopy;

	while (*s != '\0')
	{
		acceptcopy = accept;

		while (*acceptcopy != '\0')
		{
/* match found - return s */
			if (*s == *acceptcopy)
			{
				return (s);
			}
		acceptcopy = acceptcopy + 1;
		}
	s = s + 1;
	}
/* no match found - return NULL */
	return (NULL);
}

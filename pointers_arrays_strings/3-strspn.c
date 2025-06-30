#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: pointer to string to be scanned
 * @accept: pointer to string with chars to match
 * Return: number of chars in s which consist of accept
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int length = 0; /* keep track of how many matches found */
	char *acceptcopy; /* copy of accept to use in loops */
	int matchflag; /* keep track of if match is found */

	while (*s != '\0')
	{
		acceptcopy = accept;
		matchflag = 0;

		while (*acceptcopy != '\0')
		{
/* cond 1: char in accept is found */
			if (*s == *acceptcopy)
			{
				matchflag = 1;
				break;
			}
			acceptcopy = acceptcopy + 1;
		}
/* cond 2: char in accept is NOT found */
			if (matchflag == 0)
			{
				break;
			}
		}

		length = length + 1;
		s = s + 1;
	}
	return(length);
}

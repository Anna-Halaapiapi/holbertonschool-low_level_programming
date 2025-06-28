#include "main.h"

/**
 * leet - encodes string to 1337 (leet)
 * @s: holds string
 * Return: encoded string
 */

char *leet(char *s)
{
/* save start string address */
	char *start = s;

/* declare arrays of chars to swap and leet code chars */
	char letterstoswap[] = "aAeEoOtTlL";
	char leetcodechars[] = "4433007711";

/* declare var to hold index position */
	int index;

/* outer loop - to go through string */

	while (*s != '\0')
	{

		index = 0;
/* inner loop - check if char is a letter to swap */
		while (letterstoswap[index] != '\0')
		{
/* statement to perform swap */
			if (*s == letterstoswap[index])
			{
				*s = leetcodechars[index];
			}
			index = index + 1;
		}


		s = s + 1;
	}
/* return encoded string */
	return (start);
}

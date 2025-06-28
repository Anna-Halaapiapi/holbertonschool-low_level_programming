#include "main.h"

/**
 * cap_string - capitalises all words in a string
 * @string: holds string
 * Return: string in uppercase
 */

char *cap_string(char *string)
{
	char *start = string;
	char separators[] = " \n\t,;.!?\"(){}";
	int index;

/*  capitalise first char of the string if needed */
	if (*string >= 'a' && *string <= 'z')
	{
		*string = *string - 32;
	}
/* move pointer to second char in string to continue processing */
	string = string + 1;
/* loop through chars in string until reaching null */
	while (*string != '\0')
	{
		index = 0;
/* loop through word separators */
	while (separators[index] != '\0')
	{
/* checks if previous char is a separator */
		if (*string - 1 == separators[index])
		{
/* check if char is lowercase & capitalise it */
			if (*string >= 'a' && *string <= 'z')
			{
				*string = *string - 32;
			}
			break;
		}
		index = index + 1;
	}
	string = string + 1;
	}
	return (start);
}

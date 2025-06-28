#include "main.h"

/**
 * string_toupper - change lowercase letters to uppercase
 * @string: holds string
 * Return: string in uppercase
 */

char *string_toupper(char *string)

{
/* save start address of string */

	char *start = string;

/* loop through each character of string */

	while (*string != '\0')
	{

/* if char is lower - change to uppercase value at the address */

		if (*string >= 'a' && *string <= 'z')
		{
			*string = *string - 32;
		}

		string = string + 1;
	}
/* print from saved start address */

	return (start);
}

#include "main.h"

/**
 * _strcat -  appends the src string to the dest string
 * @dest: pointer to string dest
 * @src: pointer to string src
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)

{
/* save starting address of dest and src */
	char *deststart = dest;
	char *srcstart = src;

/* find length of string dest and move dest pointer to null of dest */

	int destlength = 0;

	while (*dest != '\0')
	{
		destlength = destlength + 1;
		dest = dest + 1;
	}

/* copy src to end of dest */

	int index;

	for (index = 0; src[index] != '\0'; index = index + 1)
	{
		dest[destlength + index] = src[index];
	}
	dest[destlength + index] = '\0';
	return (deststart);
}

#include "main.h"

/**
 * _strcat -  appends the src string to the dest string
 * @dest: pointer to string dest
 * @src: pointer to string src
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)

{
/* save starting address of dest */
	char *deststart = dest;

/* declare var to hold index position */
	int index;

/* find length of string dest and move dest pointer to null of dest */

	int destlength = 0;

	while (*dest != '\0')
	{
		destlength = destlength + 1;
		dest = dest + 1;
	}

/* reset dest pointer to start */
	dest = deststart;

/* copy src to end of dest */

	for (index = 0; src[index] != '\0'; index = index + 1)
	{
		dest[destlength + index] = src[index];
	}
	dest[destlength + index] = '\0';
	return (deststart);
}

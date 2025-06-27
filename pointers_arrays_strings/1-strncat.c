#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to string dest
 * @src: pointer to string src
 * @n: max number of bytes to copy from src
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

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

/* copy up to n chars from src to end of dest */

	for (index = 0; index < n && src[index] != '\0'; index = index + 1)
	{
		dest[destlength + index] = src[index];
	}
/* add null term to end of string */
	dest[destlength + index] = '\0';
	return (deststart);
}

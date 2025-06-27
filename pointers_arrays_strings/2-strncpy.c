#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to string dest
 * @src: pointer to string src
 * @n: number of characters to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index = index + 1)
	{
		dest[index] = src[index];
	}

	while (index < n)
	{
		dest[index] = '\0';
		index = index + 1;
	}
	return dest;
}

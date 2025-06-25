#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: pointer to string dest
 * @src: pointer to string src
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0' ; i = i + 1)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

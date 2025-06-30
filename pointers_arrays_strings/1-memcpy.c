#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
/* keep track of index position */
	unsigned int index = 0;

/* loop through source and copy to dest */
	while (index < n)
	{
		dest[index] = src[index];
		index = index + 1;
	}

	return (dest);
}

#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
/* keep track of index position */
	unsigned int index = 0;

/* loop through memory area s and fill with b, n times */
	while (index < n)
	{
		s[index] = b;
		index = index + 1;
	}
	return (s);
}

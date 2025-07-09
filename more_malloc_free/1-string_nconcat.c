#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: number of chars from s2 to add to end of s1
 * Return: pointer to newly allocated memory or NULL for failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memory, *s1start, *s2start;
	int index, s1length = 0, totallength = 0, s2count = 0;

	if (s1 == NULL) /* if NULL is passed treat as empty string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1start = s1; /* save start addresses of s1 and s2 */
	s2start = s2;

	while (*s1 != '\0') /* find length of s1 */
	{
		s1length = s1length + 1;
		s1 = s1 + 1;
	}

	totallength = s1length + n; /* find total length */

	memory = malloc(totallength + 1); /* malloc */

	if (memory == NULL) /* return NULL if malloc fails */
		return (NULL);

	s1 = s1start; /* reset s1 & s2 to start */
	s2 = s2start;

	for (index = 0; s1[index] != '\0'; index++) /* copy s1 to memory */
		memory[index] = s1[index];

	for (; s2[s2count] <= n; s2count++) /* copy n of s2 to memory */
		memory[index] = s2[s2count];

	memory[index] = '\0'; /* add null term to the end of string */

	return (memory); /* return pointer to new memory */
}

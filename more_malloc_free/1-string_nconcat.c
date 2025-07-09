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
	char *memory;
	unsigned int index, s1length, s2length, totallength = 0, i;

	if (s1 == NULL) /* if NULL is passed treat as empty string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find length of s1 */
	for (s1length = 0; s1[s1length] != '\0'; s1length++)
		;
	/* find how many chars from s2 should be included (some or all of s2) */
	for (s2length = 0; s2length < n && s2[s2length] != '\0'; s2length++)
		;
	totallength = s1length + s2length; /* find total length */

	memory = malloc(totallength + 1); /* malloc + null term */

	if (memory == NULL) /* return NULL if malloc fails */
		return (NULL);

	for (index = 0; index < s1length; index++) /* copy s1 to memory */
		memory[index] = s1[index];

	for (i = 0; i < s2length; index++, i++) /* copy s2 to memory */
		memory[index] = s2[i];

	memory[index] = '\0'; /* add null term to the end of string */

	return (memory); /* return pointer to new memory */
}

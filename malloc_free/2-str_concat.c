#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to concat string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int s1length = 0; /* keep track of s1 length */
	int s2length = 0; /* keep track of s2 length */
	int index = 0; /* keep track of index position */
	char *s1start = s1; /* keep track of s1 start address */
	char *s2start = s2; /* keep track of s2 start address */
	char *final; /* for memory allocation */
	int totallength; /* for s1 + s2 */

	if (s1 == NULL) /* NULL to be treated as empty strings */
	s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0') /* find length of s1 */
	{
		s1length = s1length + 1;
		s1 = s1 + 1;
	}

	while (*s2 != '\0') /* find length of s2 */
	{
		s2length = s2length + 1;
		s2 = s2 + 1;
	}
	totallength = s1length + s2length;
	final = malloc(totallength + 1); /* malloc both lengths + null term */

	if (final == NULL) /* if malloc unsuccessful - return NULL */
	{
		return (NULL);
	}
	s1 = s1start; /* reset s1 and s2 pointers to their starts */
	s2 = s2start;

	while (s1[index] != '\0') /* copy s1 to final */
	{
		final[index] = s1[index];
		index = index + 1;
	}
	index = 0; /* reset index */
	while (s2[index] != '\0') /* copy s2 to end of s1 in final */
	{
		final[s1length + index] = s2[index];
		index = index + 1;
	}
	final[totallength] = '\0'; /* add null term to end */
	return (final); /* return final */
}

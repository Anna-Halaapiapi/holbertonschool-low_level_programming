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
	int totallength = s1 length + s2 length;

	final = malloc(totallength + 1); /* malloc both lengths + null term */

	if (final == NULL) /* if malloc unsuccessful - return NULL */
	{
		return (NULL);
	}
	s1 = s1start; /* reset s1 and s2 pointers to their starts */
	s2 = s2start;
	while (s2[index] != '\0') /* append s2 to end of s1 */
	{
		s1[s1length + index] = s2[index];
		index = index + 1;
	}
	s1[s1length + index] = '\0'; /* add null term to end */
	return (s1); /* return start of s1 */
}

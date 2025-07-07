#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{

	if (s1 == NULL) /* NULL pointers to be treated as empty string */
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	int s1length = 0, s2length = 0, index, totallength;
	char *s1start = s1, *s2start = s2, *final;

	for (; *s1 != '\0'; s1++) /* find length of s1 */
	s1length = s1length + 1;
	for (; *s2 != '\0'; s2++) /* find length of s2 */
	s2length = s2length + 1;

	totallength = s1length + s2length;
	final = malloc(totallength + 1); /* malloc total length + null term */

	if (final == NULL) /* if malloc fails - return NULL */
	return (NULL);

	s1 = s1start; /* reset s1 and s2 pointers to their starts */
	s2 = s2start;

	for (index = 0; s1[index] != '\0'; index++) /* copy s1 to final */
	final[index] = s1[index];
	for (index = 0; s2[index] != '\0'; index++) /* copy s2 to final */
	final[s1length + index] = s2[index];
	final[totallength] = '\0'; /* add null term to end */
	return (final); /* return final */
}

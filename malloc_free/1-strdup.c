#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *copyofstr; /* for copy of str */
	unsigned int index = 0; /* keep track of index position */
	int length = 0; /* for length of str */
	char *startofstr = str; /* for copy of start of str */

	if (str == NULL) /* return NULL if str is NULL */
	{
		return (NULL);
	}
	while (*str != '\0') /* find length of str */
	{
		length = length + 1;
		str = str + 1;
	}

	copyofstr = malloc(length + 1); /* malloc for copyofstr */

	if (copyofstr == NULL) /* if malloc unsuccessful return NULL */
	{
		return (NULL);
	}

	str = startofstr; /* reset pointer of str to starting address */

	while (str[index] != '\0')/* loop through values at str */
	{
		copyofstr[index] = str[index];/* duplicate str into copyofstr */
		index = index + 1;
	}
	copyofstr[index] = '\0'; /* add null term to end of copyofstr */
	return (copyofstr); /* return pointer to copyofstr */
}

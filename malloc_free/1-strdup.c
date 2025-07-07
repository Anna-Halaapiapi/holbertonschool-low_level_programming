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
	char startofstr = str; /* for copy of start of str */

	if (str == NULL) /* return NULL if str is NULL */
	{
		return (NULL);
	}
	while (*str != '\0') /* find length of str */
	{
		length = length + 1;
		str = str + 1;
	}
	copyofstr = ((char *)malloc(length) + 1); /* malloc for copyofstr */

	str = startofstr; /* reset pointer of str to starting address */

	while (*str != '\0') /* loop through str to copy str into copystr */
	{
	if (copyofstr != NULL) /* if malloc successful, duplicate str */
	{
		copyofstr[index] = str[index];
	}
	else /* if allocattion unsuccessful, return NULL */
	{
		return (NULL);
	}
	index = index + 1;
	}
	return (copyofstr); /* return pointer to copyofstr */
	free(str); /* free old string */
}

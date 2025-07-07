#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */
#include <string.h> /* for strlen */

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
/* declare var to hold a copy of str */
	char *copyofstr;

/* declare var to keep track of index position */
	unsigned int index = 0;

/* return NULL if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

/* allocate memory for the copy of string */
	copyofstr = (char *)malloc(strlen(str) + 1);

/* loop through to copy str into copystr */
	while (*str != '\0')
	{

/* check for successful allocation and copy str into copyofstr */
	if (copyofstr != NULL)
	{
		copyofstr[index] = str[index];
	}
/* if allocattion unsuccessful, return NULL */
	else
	{
		return (NULL);
	}

	index = index + 1;
	}
/* return pointer to copyofstr */
	return (copyofstr);

/* free new string */
	free(str);
}

#include "main.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */
#include <string.h> /* for strlen & strcpy */

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 * Return: pointer to duplicated string or NULL
 */

char *_strdup(char *str)
{
/* declare var to hold a copy of str */
	char *copyofstr;

/* return NULL if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

/* allocate memory for the copy of string */
	copyofstr = (char *)malloc(strlen(str) + 1);

/* check for successful allocation and copy str into copyofstr */
	if (copyofstr != NULL)
	{
		strcpy(copyofstr, str);
	}
/* if allocattion unsuccessful, return NULL */
	else
	{
		return (NULL);
	}
/* return pointer to copyofstr */
	return (copyofstr);

/* free new string */
	free(copyofstr);
}

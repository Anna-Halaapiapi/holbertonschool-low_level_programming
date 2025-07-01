#include "main.h"
#include <stddef.h> /* for NULL */

/**
 * _strstr - finds first instance of substring in string
 * @needle: pointer to subtring to find
 * @haystack: pointer to string to search through
 * Return: pointer to beginning of substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)

{
	char *needlecopy; /* to check needle from start in inner loop */
	char *haystackcopy; /* temp advances through haystack in inner loop */

/* outer - loops through haystack */
	while (*haystack != '\0')
	{
		needlecopy = needle;/*reset to start of needle for mismatches*/
		haystackcopy = haystack;/*reset to current haystack position*/

/* inner - loops through letters in needle to compare against haystack */
		while (*needlecopy != '\0' && *haystackcopy == *needlecopy)
		{
			needlecopy = needlecopy + 1;
			haystackcopy = haystackcopy + 1;
		}
/* if match found */
		if (*needlecopy == '\0')
		{
			return (haystack);
		}
		haystack = haystack + 1;
	}
/* return NULL if needle not found */
	return (NULL);
}

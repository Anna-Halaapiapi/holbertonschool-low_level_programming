#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 0 - (equal)
 * >0 - first mismatch char in s1 is greater than that of s2
 * <0 - first mismatched char in s1 is lower than that of s2
 */

int _strcmp(char *s1, char *s2)

{
/* keep track of result of comparison and index position of string */
	int result;
	int index = 0;

/* loop through strings until mismatch or end */
	while (s1[index] != '\0' && s2[index] != '\0')
	{

/* cond 1 = 0 */
	if (s1[index] == s2[index])
	{
		index = index + 1;
	}

/* cond 2 = >0 */
	else if (s1[index] > s2[index])
	{
		result = s1[index] - s2[index];
		return (result);
	}

/* cond 3 = <0 */

	else if (s1[index] < s2[index])
	{
		result = s1[index] - s2[index];
		return (result);
	}
	}
/* compare any last chars */
	result = s1[index] - s2[index];
	return (result);
}

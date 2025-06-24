#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer to string s
 * Return: void
 */

void rev_string(char *s)

{

/* save starting address of s */
	char *start = s;

/* find length of string */


		int length = 0;

		while (*s != '\0')
		{
			length = length + 1;
			s = s + 1;
		}
/* bring pointer back one from null to last char of string */
	s = s - 1;


/* char swap loop - swaps 1st and last char moving toward middle of string */
	while(start < s)
	{
        int temp = *start;
        *start = *s;
        *s = temp;

	start = start + 1;
	s = s - 1;
	}
}

#include <stdio.h>
/**
 * main - entry point
 * Description: Prints alphabet in lower case, but not e or q
 * Return: 0 (success)
 */

int main(void)
{
/* intialise a char variable called c */
	char c;

/* initialise var c, when c is less/equal to z, c+1 in each loop iteration */
	for (c = 'a'; c <= 'z'; c++)
/* prints var c unless c is e or q. Once complete, print a new line */
	if (c != 'e' && c != 'q')
	putchar(c);
	putchar('\n');

	return (0);
}

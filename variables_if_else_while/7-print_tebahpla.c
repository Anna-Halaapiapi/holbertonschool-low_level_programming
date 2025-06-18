#include <stdio.h>
/**
 * main - entry point
 * Description: Prints a-z in reverse
 * Return: 0 (success)
 */

int main(void)
{
/* declare var c to store alphabetical characters */
	char c;

/*
 * start var c at z
 * continue loop until c is less/equal to a
 * decrease c by 1 for each loop iteration
 */
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
/* print new line */
	putchar ('\n');

	return (0);
}

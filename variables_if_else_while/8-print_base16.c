#include <stdio.h>
/**
 * main - entry point
 * Description: prints all base 16 numbers (0-9 a-f)
 * Return: 0 (success)
 */

int main(void)
{
/* declare var n (numbers) and var c (alphabet) */
	int n;
	char c;

/*
 * number loop starting at 0
 * run loop while n is less/equal to 9
 * add 1 each loop iteration
 */

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
/*
 * aphabetic loop starting at a
 * run loop while c is equal/less than f
 * add 1 each loop iteration
 */
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

/* add new line */

	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 * Description: Prints numbers 0-9
 * Return: 0 (success)
 */

int main(void)
{
/* declare int var n */
	int n;

/*
 * start n at 0 (ASCII48)
 * continue loop while n is less/equal to 9 (ASCII57)
 * increase n by 1 in each loop iteration
 */
	for (n = '0'; n <= '9'; n++)

/* loop to print numbers 0-9 */
	{
		putchar(n);
	}
/* prints new line after numbers */
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit numbers separated by a comma
 * Return: 0 (success)
 */

int main(void)
{
/* declare var n for numbers */
	int n;

/*
 * print 0-9 separated by comma and space
 * start with 0
 * continue loop until n less/equal to 9
 * add 1 to n for each loop iteration
 */

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

/* if n doesn't equal 9, print a comma and space after n */

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
return (0);
}

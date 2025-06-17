#include <stdio.h>
/**
 * main - entry point
 * Description: Prints alphabet in lower case
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}

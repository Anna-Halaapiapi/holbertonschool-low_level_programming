#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x 10 with new line
 * Return: void
 */

void print_alphabet_x10(void)

{
	int n = 0;
	char c;



/* outer loop - runs while n is less than 10 */
while (n < 10)
{
/* intialise c at 'a' */
	c = 'a';

/* inner loop - runs while c is less/equal to 'z' */
	while (c <= 'z')
	{
		/* print alphabet and increment c by 1*/
		_putchar(c);
		c = c + 1;
	}

/* prints new line and increments n by 1 */
	_putchar('\n');
	n = n + 1;
}


}

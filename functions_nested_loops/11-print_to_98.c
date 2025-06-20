#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from var n to 98
 * @n: stores number to test
 * Return: displays all natural numbers from n to 98
 */

void print_to_98(int n)
{
	while (n != 98)
	{
/* scenario - n is greater than 98 */
	if (n > 98)
	{
		printf("%d, ", n);
		n = n - 1;
	}
/* scenario - is less than 98 */

	else if (n < 98)
	{
		printf("%d, ", n);
		n = n + 1;
	}
	}
/* print 98 */
	printf("98\n");
}

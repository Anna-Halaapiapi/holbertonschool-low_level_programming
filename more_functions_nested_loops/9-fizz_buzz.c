#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints numbers 1-100
 * Return: void
 */

int main(void)
{

	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n = n + 1;
	}
	putchar('\n');
	return (0);
}

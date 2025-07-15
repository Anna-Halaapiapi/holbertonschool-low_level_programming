#include "3-calc.h"
#include <stdlib.h> /* for malloc, free, exit, NULL */
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: result of operation
 * OR Error (status 98) - if num arguments is wrong
 * OR Error (status 99) - if operator is not +,-,*,/,%
 * OR Error (status 100) - if user divides (/ or %) by 0
 */

int main(int argc, char *argv[])
{
/* use atoi to convert arguments to int */
	a = atoi(argv[1]);
	op = atoi(argv[2]);
	b = atoi(argv[3]);

/* call function and print result */
	printf("%d\n", f(a, b);

/* status 98 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
/* status 99 */
	if (argv[2] != )
	{
		printf("Error\n");
		exit(99);
	}
/* status 100 */
	if (argv[1] == 0 || argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
}

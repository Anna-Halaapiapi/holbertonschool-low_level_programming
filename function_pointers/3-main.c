#include "3-calc.h"
#include <stdlib.h> /* for malloc, free, exit, NULL */
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: count arguments on command line
 * @argv: argument vector
 * Return: result of operation
 * OR Error (status 98) - if num arguments is wrong
 * OR Error (status 99) - if operator is not +,-,*,/,%
 * OR Error (status 100) - if user divides (/ or %) by 0
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

/* declare function pointer f */
	int (*f)(int, int);
/* match user inputted operator and assigns to f */
	f = get_op_func(argv[2]);

/* status 98 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

/* use atoi to convert arguments to int */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

/* status 99 */
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
/* status 100 */
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

/* call function and print result */
	printf("%d\n", f(a, b));
	return (0);
}

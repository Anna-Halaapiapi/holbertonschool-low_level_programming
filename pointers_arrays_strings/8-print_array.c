#include "main.h"
#include <stdio.h>

/**
 * print_array - prints all elements of an int array
 * @a: pointer to int a
 * @n: number of ints in array
 * Return: void
 */

void print_array(int *a, int n)

{
/* loop counter var */
	int i = 0;

	while (i < n)
	{
	printf("%d", a[i]);
/* print comma and space if not last int */
	if (i != n - 1)
	{
		printf(", ");
	}
	i = i + 1;
	}
	printf("\n");
}

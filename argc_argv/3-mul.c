#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector - array of pointers to strings
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
/* change char nums to int nums */
	int result = 0;
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);

/* if 2 numbers are entered */
	if (argc == 3)
	{
/* multiply numbers, print result to std output */
		result = number1 * number2;
		printf("%d\n", result);
	}
/* return error if 2 numbers not received */
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

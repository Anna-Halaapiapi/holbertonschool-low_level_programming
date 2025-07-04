#include <stdio.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector - array of pointers to strings
 * Return: result of multiplication or Error if 2 numbers not received
 */

int main(int argc, char *argv[])
{

	int result = 0;

/* multiplies 2 numbers index 1 and 2, returns result */
	if (argc == 3)
	{
		result = argv[1] * argv[2];
		printf("%d\n", result);
	}

/* return error if 2 numbers not received */
	else
	{
		return ("Error");
	}
}

#include <stdio.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector - array of pointers to strings
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int index = 0;

	while (argc > index)
	{
		printf("%s\n", argv[index]);
		index = index + 1;
	}
	return (0);
}

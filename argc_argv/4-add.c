#include <stdio.h>
#include <stdlib.h> /* for atoi */
#include <ctype.h> /* for isdigit */

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector - array of pointers to strings
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int stringindex = 1;
	int charindex;
	int result = 0;
	int currentnum;

/* if no numbers received */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

/* outer loop - go through each string */
	while (argc > stringindex)
	{
		charindex = 0;

/* inner loop - check if each char in each string is a valid number */
		while (argv[stringindex][charindex] != '\0')
		{
			if (!isdigit(argv[stringindex][charindex]))
			{
				printf("Error\n");
				return (1);
			}
			charindex = charindex + 1;
		}

/* convert string to int */
		currentnum = atoi(argv[stringindex]);
		result = result + currentnum;
	}
/* print result */
	printf("%d\n", result);
	return (0);
}

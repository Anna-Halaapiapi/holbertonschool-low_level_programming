#include <stdio.h>
/**
 * main - entry point
 * Description: Returns sizes of data types
 * Return: 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %zu\n", sizeof(char));
	printf("Size of an int: %zu\n", sizeof(int));
	printf("Size of a long int: %zu\n", sizeof(long int));
	printf("Size of a long long int:  %zu\n", sizeof(long long int));
	printf("Size of a float:  %zu\n", sizeof(float));

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints whether variable n (number) is positive/negative or equal to zero.
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* prints statement if n is positive */
	if (n > 0) {
		printf("%d is positive\n", n);
	}
/* prints statement if n is equal to 0 */
	if (n == 0) {
		printf("%d is zero\n", n);
	}
/* prints statement if n is negative */
	if (n < 0) {
		printf("%d is negative\n", n);
	}
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints last digit of n and relevant string
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

/* create local variable using modulus for last digit*/
	int lastdigit = n % 10;

	/* prints string with value of n and last digit */
	printf("Last digit of %d is %d", n, lastdigit);

	/* prints if last digit of n is greater than 5 */
	if (lastdigit > 5)
		printf(" and is greater than 5\n");
	/* prints if last digit of n is zero */
	else if (lastdigit == 0)
		printf(" and is 0\n");
	/* prints if last digit of n is less than 6 but not 0 */
	else if ((lastdigit < 6) && (lastdigit != 0))
		printf(" and is less than 6 and not 0\n");
	return (0);
}

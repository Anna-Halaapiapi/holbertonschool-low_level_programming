#include "main.h"

/**
 * primechecker - extra function, checks if number is divisible
 * @n: number to check if prime or not
 * @d: current divisor
 */

int primechecker(int n, int d)
{
/* if divisor is greater than n/2, n is a prime number */
	if (d > n/2)
	{
		return (1);
	}
/* if n is divisible by d with remainder of 0, n is not a prime number */
	if (n % d == 0)
	{
		return (0);
	}
/* recursive case */
	else return (primechecker(n, d + 1));
}

/**
 * is_prime_number - returns 1 if n is prime number, else returns 0
 * @n: number to check
 * Return: 1 (n is prime number) or 0 (n is not a prime number)
 */
int is_prime_number(int n)
{
/* handles 0, 1 or negative numbers - not prime numbers */
	if (n <= 1)
	{
		return (0);
	}
/* handles 2 - the only even prime number */
	if (n == 2)
	{
		return (1);
	}
/* recursive case from divisor of 2 */
	return (primecheckern, 2))
}

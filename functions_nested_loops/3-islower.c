#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character for checking
 *
 * Return: return 1 if c is lowercase, else return 0
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

#include "main.h"

/**
 * _isdigit - checks for digit (0-9)
 * @c: character for checking
 * Return: return 1 if c is digit, else return 0
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}

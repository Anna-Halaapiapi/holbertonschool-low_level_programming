#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character for checking
 * Return: 1 for letter, else returns 0
 */

int _isalpha(int c)

{
	if (c <= 'z' && c >= 'a')
		return (1);

	else if (c <= 'Z' && c >= 'A')
		return (1);

	else
		return (0);
}

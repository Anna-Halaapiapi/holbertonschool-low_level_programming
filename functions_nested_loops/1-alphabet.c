#include "main.h"

/**
 * main - entry point
 * Description: prints lowercase alphabet
 * Return: 0 (success)
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');

	return (0);
}

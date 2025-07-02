#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: pointer to string
 * Return: void
 */

void _puts_recursion(char *s)
{

/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

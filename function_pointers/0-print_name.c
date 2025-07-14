#include "function_pointers.h"
#include <stdlib.h> /* for malloc, free, exit */

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

#include "calc.h"
#include <stdlib.h> /* for malloc, free, exit, NULL */
#include <stdio.h>

/**
 * get_op_func - selects function to perform
 * @s: operator passed as argument to program
 * Return: pointer to corresponding function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


}

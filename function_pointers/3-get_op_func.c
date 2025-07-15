#include "3-calc.h"
#include <stdlib.h> /* for malloc, free, exit, NULL */
#include <stdio.h>
#include <string.h>

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
	int i = 0;
/* loop through struct array */
	while (i < 5)
	{
/* compare operator from command line to op in ops array for a match */
		if (strcmp(s, ops[i].op) == 0)
	{
		/* return the function from ops array index position */
		return(ops[i].f);
	}

	i = i + 1;

	}
/* if no match found - return NULL */
	return (NULL);
}

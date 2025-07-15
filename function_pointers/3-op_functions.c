#include "3-calc.h"
#include <stdlib.h> /* for malloc, free, exit, NULL */
#include <stdio.h>
#include <string.h>

/**
 * op_add - adds two numbers
 * @a: number1
 * @b: number2
 * Return: int result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract num2 from num1
 * @a: number1
 * @b: number2
 * Return: int result of operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies num1 and num2
 * @a: number1
 * @b: number2
 * Return: int result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides num1 by num2
 * @a: number1
 * @b: number2
 * Return: int result of operation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of a divided by b
 * @a: number1
 * @b: number2
 * Return: int result of operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds 5 functions
 * @a: int a
 * @b: int b
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: int a
 * @b: int b
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies functions
 * @a: int a
 * @b: int b
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division functions
 * @a: int a
 * @b: int b
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function of modulo
 * @a: int a
 * @b: int b
 * Return: the remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

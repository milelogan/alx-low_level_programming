#include "main.h"

/**
 * _pow_recursion - recursion function for power of a number
 * @x: base
 * @y: denominator
 * Return: returns function or itself
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

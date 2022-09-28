#include "main.h"

/**
 * factorial - recursion fucntion for finding factorial
 * @n: factorial number
 * Return: itself
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1)
}

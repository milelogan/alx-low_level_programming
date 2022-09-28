#include "main.h"

/**
 * factorial - recursion fucntion for finding factorial
 * @n: factorial number
 * Return: itself
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

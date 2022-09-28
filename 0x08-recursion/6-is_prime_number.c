#include "main.h"

/**
 * helper - function to help
 * @i: helper
 * @n: number
 * Return: value
 */

int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}

/**
 * is_prime_number - function for prime number
 * @n: number
 * Return: void
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}

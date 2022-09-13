#include "main.h"

/**
 * print_sign - prints sign according to value of n
 *
 * main - check the code.
 *
 * Return: always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

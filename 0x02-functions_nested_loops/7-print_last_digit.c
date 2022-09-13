#include "main.h"

/**
 * print_last_digit - main function
 *
 * @n: the character
 *
 *Return: always 0.
 */

int print_last_digit(int n)
{
	int n;
	while(n % 10)
	{
		_putchar(n + '0');
		return(n);
	}
	return (0);
}

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
	_putchar((n % 10) + '0');
	return(n);
}

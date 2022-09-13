#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - main function
 *
 * @n: the character
 *
 *Return: always 0.
 */

int print_last_digit(int n)
{
	_putchar(_abs(n % 10) + '0');
	return(n);
}

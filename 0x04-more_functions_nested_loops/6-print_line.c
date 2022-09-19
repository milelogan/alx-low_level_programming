#include "main.h"
/**
 * print_line - main function
 *
 * @n: character of choice
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

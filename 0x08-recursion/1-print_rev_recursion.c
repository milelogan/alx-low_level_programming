#include "main.h"

/**
 * _print_rev_recursion - recursion function to print string in reverse
 * @s: string variable
 * Return: returns itself;
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

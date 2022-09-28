#include "main.h"

/**
 * _puts_recursion - recursion function to print string
 * @s: string variable
 * Return: returns itself;
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		putchar('\n');
	}
}

#include "main.h"
#include "4-print_rev.c"

/**
 * rev_string - main function
 * @s: character
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; *s[i] < '\0'; i++)
	{
		_putchar(print_rev(*(s + i)));
	}
	_putchar('\n');
}

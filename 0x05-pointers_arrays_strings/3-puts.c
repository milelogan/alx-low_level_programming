#include "main.h"
#include "2-strlen.c"

/**
 * _puts - main function
 * @str: character
 *
 * Return: void
 */

void _puts(char *str)
{
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

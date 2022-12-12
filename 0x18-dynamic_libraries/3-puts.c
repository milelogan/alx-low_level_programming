#include "main.h"

/**
 * _puts - main function
 * @str: character
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

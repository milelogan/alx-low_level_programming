#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - main function
 * @str: character
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int c = 0;
	int lenn = _strlen(str);
	int len = _strlen(str) % 2;

	if (len != 0)
	{
		c += 1;
	}

	for (i = (lenn + c) /2; i < lenn; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

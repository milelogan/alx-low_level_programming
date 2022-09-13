#include <stdio.h>
#include <main.h>

/**
 *
 * main - check the code.
 *
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	char i,j;
	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

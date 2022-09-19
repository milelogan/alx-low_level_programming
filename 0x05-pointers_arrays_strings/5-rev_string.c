#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - main function
 * @s: character
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	char temp;
	int len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

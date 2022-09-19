#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - main function
 * @s: character of choice
 *
 * Return: void
 */

int _strlen(char *s)
{
	int count = 0;
	for (int i = 0; i <= strlen(s); i++)
	{
		if (s[i] != '')
			count++;
	}
	return (i);
}

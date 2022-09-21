#include "main.h"
#include <stdio.h>

/**
 * leet - main function
 * @str: character
 *
 * Return: void
 */

char *leet(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		str[j] = str[j] - 30;
		j++
	}
}

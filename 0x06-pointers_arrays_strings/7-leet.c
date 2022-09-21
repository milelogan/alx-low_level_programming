#include "main.h"
#include <stdio.h>

/**
 * leet - main funcion
 * @str: character
 * Return: void
 */

char *leet(char *str)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (str[i] == alphaArr[j])
			{
				str[i] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (str);
}

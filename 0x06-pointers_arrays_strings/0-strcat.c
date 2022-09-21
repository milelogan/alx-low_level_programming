#include "main.h"

/**
 * _strcat - main function
 * @dest: first / destination
 * @src: source
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{}

	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[j + i] = '\0';
	return (dest);
}

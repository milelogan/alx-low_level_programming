#include "main.h"

/**
 * _strncat - main function
 * @dest: first / destination
 * @src: source
 * @n: character of choice
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{}

	for (y = 0; i < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[j + i] = '\0';
	return (dest);
}

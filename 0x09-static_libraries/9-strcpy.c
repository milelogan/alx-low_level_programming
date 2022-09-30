#include "main.h"

/**
 * _strcpy - main function
 *
 * @dest: destination
 * @src: source
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}

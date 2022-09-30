#include "main.h"
#include "2-strlen.c"

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

	for (k = 0; k <= _strlen(src); k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}

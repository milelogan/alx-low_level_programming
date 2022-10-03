#include "main.h"

/**
 * create_array - function that creates array of chars
 * @size: size of array
 * @c: char of array
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}

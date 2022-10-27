#include "main.h"

/**
 * binary_to_uint - function that converts binary to uint
 * @b: char value
 * Return: value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b == '1')
		{
			i = (i << 1) | 1;
		}
		else if (*b == '0')
			i <<= 1;
		b++;
	}
	return (i);
}

#include "main.h"

/**
 * set_bit -function that returns value of bit to 1 at a given index
 * @n: number
 * @index: given index
 * Return: value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)

		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}

#include "main.h"

/**
 * clear_bit - function that stes value of bit to 0 at a given index
 *@n: number
 * @index: index
 * Return: value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 100)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}

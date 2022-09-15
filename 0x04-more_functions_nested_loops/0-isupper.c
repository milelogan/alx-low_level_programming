#include "main.h"

/**
 * _isupper - main function
 *
 * @c: character of choice
 *
 * Return: returns 1 or 0;
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

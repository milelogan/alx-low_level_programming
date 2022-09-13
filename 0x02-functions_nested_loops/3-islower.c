#include "main.h"

/**
 * _islower - main function
 *
 * @c is the character
 *
 * main - check the code.
 *
 * Return: always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

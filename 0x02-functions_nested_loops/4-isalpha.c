#include "main.h"
#include <ctype.h>

/**
 * main - check the code.
 *
 * Return: always 0;
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

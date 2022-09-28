#include "main.h"

/**
 * _putchar - to print
 * @c: character of choice
 *Return: void
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

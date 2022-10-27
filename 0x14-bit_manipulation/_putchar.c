#include <unistd.h>

/**
 * _putchar- function to print
 * @c: characer to print
 * Return: value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

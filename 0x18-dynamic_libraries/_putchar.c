#include <unistd.h>

/**
 * _putchar - main function
 * @c: character of choice
 *
 * Return: void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: separates
 * @n: required arguements
 * Return: value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		value = va_arg(args, int);

		printf("%d", value);

	}
	va_end(args);
	printf("\n");
}

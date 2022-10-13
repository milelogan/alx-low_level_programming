#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers
 * @separator: separates
 * @n: required arguements
 * Return: value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		value = va_arg(args, char *);

		if (value == NULL)
			printf("(nil)");

		printf("%s", value);

	}
	va_end(args);
	printf("\n");
}

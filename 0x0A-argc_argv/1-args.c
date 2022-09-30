#include "main.h"
#define UNUSED(x) (void)(x)

/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: omo void
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: omo void
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 1 && argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

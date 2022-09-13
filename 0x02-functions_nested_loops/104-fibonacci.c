#include "main.h"
#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0;
 *
 */

int main(void)
{
	int n = 0, i;
	float n2 = 1, n3;

	for (i = 0; i <= 100; i++)
	{
		n3 = n + n2;
		printf("%d", n3);
		n = n2;
		n2 = n3;
	}
	return 0;

}

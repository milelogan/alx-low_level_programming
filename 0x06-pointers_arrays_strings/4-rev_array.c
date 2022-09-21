#include "main.h"

/**
 * reverse_array - main function
 * @n: character
 * @a: pointer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j[n]

	for (i = 0; i < n; i++)
	{
		j[n - 1 - i] = a[i];
	}

	for (int i = 0; i < n; i++)
	{
		a[i] = j[i];
	}
}

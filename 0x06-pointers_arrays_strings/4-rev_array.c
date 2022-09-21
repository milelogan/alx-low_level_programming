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
	int low;
	int high;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		int temp = a[low];

		a[low] = a[high];
		a[high] = temp;
	}

}

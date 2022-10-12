#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given an array
 * @array: array
 * @size: size of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(0);
	for (i = 0; i < size, i++)
		action(array[i]);
}

#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0;
 *
 */

int main(void)
{
	int count = 2;

	float x = 1;
	float y = x + 1;
	float z = x + y;

	printf("%.0f, ", x);
	printf("%.0f, ", y);

	for (count < 98)
	{
		count++;
		printf("%.0f", z);
		x = y;
		y = z;
		z = x + y;
		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);

}

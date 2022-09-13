#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0;
 *
 */

int main(void)
{
	int counter = 2;

	double a = 1;
	double b = a + 1;
	double c = a + b;

	printf("%lf, ", a);
	printf("%lf, ", b);

	while (counter < 98)
	{
		counter++;
		printf("%lf", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);

}

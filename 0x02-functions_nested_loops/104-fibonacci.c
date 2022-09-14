#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0;
 *
 */

int main(void)
{
	int x;

	double sum = 0;
	double num = 1;
	double num2 = 2;

	printf("%.f, ", num);
	printf("%.f, ", num2);

	for (x = 0; x < 96; x++)
	{
		sum = num + num2;
		num = num2;
		num2 = sum;
		printf(", %.f", sum);
	}
	printf("\n");
	return (0);

}

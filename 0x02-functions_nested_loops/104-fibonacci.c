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
	double r0, r1, r2, r3, r4, r5;

	printf("%.f, ", num);
	printf("%.f, ", num2);

	for (x = 0; x < 91; x++)
	{
		sum = num + num2;
		num = num2;
		num2 = sum;
		printf(", %.f", sum);
	}

	r4 = sum / 1000000000;
	r3 = sum % 1000000000;
	r2 = num / 1000000000;
	r1 = num % 1000000000;

	for (; x < 97; x++)
	{
		r0 = r4 + r2;
		r5 = r3 + r1;
		printf("%.f""%.f", r0, r5);
		if (x != 96)
		{
			printf(",");
			printf(" ");
		}
		r4 = r2;
		r3 = r1;
		r2 = r0;
		r1 = r5;
	}

	printf("\n");
	return (0);

}

#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0;
 *
 */

int main(void)
{
	long int x;

	long int sum = 0;
	long int num = 1;
	long it num2 = 2;
	long int r0, r1, r2, r3, r4, r5;

	printf("%ld, ", num);
	printf("%ld, ", num2);

	for (x = 0; x < 91; x++)
	{
		sum = num + num2;
		num = num2;
		num2 = sum;
		printf(", %ld", sum);
	}

	r4 = sum / 1000000000;
	r3 = (sum % 1000000000);
	r2 = num / 1000000000;
	r1 = (num % 1000000000);

	for (; x < 97; x++)
	{
		r0 = r4 + r2;
		r5 = r3 + r1;
		printf("%ld""%ld", r0, r5);
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

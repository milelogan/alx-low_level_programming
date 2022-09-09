#include <stdio.h>
/**
* main - entry point
*
* Return: alway returns 0
*
*/

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	{
		putchar((numbers % 10) + '0');
		if (numbers != 9){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

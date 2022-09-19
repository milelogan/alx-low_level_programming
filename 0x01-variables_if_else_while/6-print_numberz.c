#include <stdio.h>
/**
* main - entry point
*
* Return: alway returns 0
*
*/

int main(void)
{
	long numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar(numbers + '0');
	putchar('\n');
	return (0);
}

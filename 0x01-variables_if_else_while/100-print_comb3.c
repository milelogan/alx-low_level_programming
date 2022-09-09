#include <stdio.h>
/**
* main - entry point
*
* Return: alway returns 0
*
*/

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if ((y % 10) > (x % 10))
					{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					if (x != 8 || y != 9)
					{
					putchar(',');
					putchar(' ');
					}
					}
		}
	}
	putchar('\n');
	return (0);
}

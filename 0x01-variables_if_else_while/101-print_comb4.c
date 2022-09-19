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
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if ((z > y) && (y > x))
					{
					putchar((x % 10) + '0');
					putchar((y % 10) + '0');
					putchar((z % 10) + '0');
					if (x != 7 || y != 8 || z != 9)
					{
					putchar(',');
					putchar(' ');
					}
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

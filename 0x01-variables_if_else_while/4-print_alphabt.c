#include <stdio.h>
/**
* main - entry point
*
* Return: alway returns 0
*
*/

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets == 'q' || alphabets == 'e')
		{
			continue;
		}
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}

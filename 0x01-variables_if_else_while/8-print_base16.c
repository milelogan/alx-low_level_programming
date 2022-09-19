#include <stdio.h>
/**
* main - entry point
*
* Return: alway returns 0
*
*/

int main(void)
{
	char number;
	char alphabets;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
<<<<<<< HEAD
* main - causes an infinite loop
*
* Return: 0
*/
=======
 * main - causes an infinite loop
 *
 * Return: 0
 */
>>>>>>> a4e734c641f3457565fbf3b47d607aa906ed0399
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

/*
*while (i < 10)
*{
*Infinite loop - No increase of variable
*putchar(i);
}
*/
printf("Infinite loop avoided! \\o/\n");
return (0);
}

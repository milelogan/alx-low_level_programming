#include "main.h"
#include "2-strlen_recursion.c"

/**
 * helper - helps
 * @a: okay
 * @s: string
 * Return: value
 */

int helper(int a, char *s)
{
	if (*s)
	{
		if (*s != s[_strlen_recursion(s) - a])
		{
			return (0);
		}
		else
		{
			return (helper(a + 1, s + 1));
		}
	}
	return (1);
}


/**
 * is_palindrome - function
 * @s: string
 * Return: value
 */

int is_palindrome(char *s)
{
	int a = 1;

	return (helper(a, s));
}

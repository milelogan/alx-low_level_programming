#include "main.h"

/**
 * string_toupper - main function
 *
 * Return: void
 */

char *string_toupper(char *s)
{
	int i;

	while(s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}

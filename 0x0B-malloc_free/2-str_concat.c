#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: char 1
 * @s2: char 2
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int x = 0;
	int y = 0;
	int size = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (; s1[x] != '\0'; x++)
		;
	for (; s2[x] != '\0'; y++)
		;
	size = x + y + 1;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		arr[x] = s1[x];

	for (y = 0; s2[y] != '\0'; y++)
		arr[x + y] = s2[y];
	return (arr);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *buf;
	unsigned int i, j, k, max_limit;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	buf = malloc(sizeof(char) * (i + j + 1));

	if (buf == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		buf[k] = s1[k];
	}
	max_limit = j;
	for (j = 0; j <= max_limit; j++, k++)
	{
		buf[k] = s2[j];
	}
	return (buf);
}

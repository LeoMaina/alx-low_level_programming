#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 *
 * @str: string given
 * Return: pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *buf;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		;
	}

	buf = malloc(sizeof(char) * (i + 1));

	if (buf == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		buf[j] = str[j];
	}
	return (buf);
}

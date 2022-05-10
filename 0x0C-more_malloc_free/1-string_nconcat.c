#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: umber of bytes in string s2 to be concatenated to s1
 * Return: NULL if function fails, and
 * pointer to allocated memory if function works
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sconcat;
	unsigned int ls1, ls2, lsconcat, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;
	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;
	if (n > ls2)
		n = ls2;

	lsconcat = ls1 + n;
	sconcat = malloc(lsconcat + 1);

	if (sconcat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lsconcat; i++)
	{
		if (i < ls1)
		{
			sconcat[i] = s1[i];
		}
		else
		{
			sconcat[i] = s2[i - ls1];
		}
	}
	sconcat[i] = '\0';
	return (sconcat);
}

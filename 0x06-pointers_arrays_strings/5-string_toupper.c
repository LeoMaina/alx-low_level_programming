#include "main.h"

/**
 * string_toupper - convert lower case to upper
 *
 * @s: parameter
 * Return: s
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}


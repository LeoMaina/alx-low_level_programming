#include "main.h"

/**
 * cap_string - capitalize after special characters
 *
 * @s: character
 * Return: string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char spe[13] = {' ', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}', '\t', '\n'};

	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
	}
	i++;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i] >= 97 && s[i] <= 122) && (s[i - 1] == spe[j]))
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}




#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character in string
 * @s: the string
 * @c: the charcater
 *
 * Return: a pointer to a character aka the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);

}

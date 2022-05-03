#include "main.h"
#define NULL 0

/**
 * _strchr - locates character in string
 * @s: the string
 * @c: the charcater
 *
 * Return: a pointer to a character aka the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}

}

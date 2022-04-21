#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: pointer to the variable str
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int ans = 0;

	while (*s != '\0')
	{
		ans++;
		s++;
	}

	return (ans);
}

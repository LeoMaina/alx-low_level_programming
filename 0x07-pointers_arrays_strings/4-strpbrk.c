#include "main.h"
#define NULL 0

/**
 * _strpbrk - locates first occurence 
 *
 * @s: string to be checked
 * @accept: string to be matched
 * Return: pointer to the byte of the first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (NULL);
}

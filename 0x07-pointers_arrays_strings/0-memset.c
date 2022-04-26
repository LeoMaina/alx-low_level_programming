#include "main.h"

/**
 * _memset - fills the first n bytes of a  pointer with the ocnstant byte b
 *
 * @b: new value
 * @s: pointer
 * @n: size of memory area or array
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}

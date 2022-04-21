#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: pointer to string str
 */
void print_rev(char *s)
{
	int length;
	int i = 0;
	int count;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;

	for (count = length; count > 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}

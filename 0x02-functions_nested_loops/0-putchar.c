#include "main.h"

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char g[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(g[i]);
	}
	_putchar('\n');

	return (0);
}

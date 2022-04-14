#include "main.h"

/**
 * print_line - print underscore
 * @n: parameter
 */

void print_line(int n)
{
	int count;

	for (count = n; count > 0; count--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

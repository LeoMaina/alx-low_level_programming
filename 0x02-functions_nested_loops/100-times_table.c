#include "main.h"

/**
 * print_times_table -The title says it
 *
 * @n: parameter
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			c = a * b;

			_putchar(48);
			_putchar(',');
			_putchar(' ');

			if (c <= 9)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}



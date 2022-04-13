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

	if (n >= 0 && n <= 15)
	{

	for (a = 0; a <= n; a++)
	{
		_putchar(48);

		for (b = 1; b <= n; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;

			if (c <= 9)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >9 && c <= 99)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else
			{
				_putchar((c / 100) % 10 + '0');
				_putchar((c / 10) % 10 + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
	}
}



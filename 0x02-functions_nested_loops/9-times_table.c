#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: nothing
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 0; j < 10; j++)
		{
			int k = i * j;

			if (k <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
		}
		_putchar('\n');
	}
}



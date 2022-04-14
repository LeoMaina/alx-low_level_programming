#include "main.h"

/**
 * print_number - print
 * @n: parameter
 * Return: void
 */

void print_number(int n)
{
	unsigned int tens, digit;
	unsigned int positive = n;
	double t_bed = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (t_bed <= positive)
		{
			t_bed *= 10;
		}
		tens = t_bed / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}

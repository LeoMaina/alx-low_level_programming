#include "main.h"

/**
 * print_last_digit - Print last digit of any number
 *
 * @n: value being checked
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}

	_putchar(a + '0');

	return (a);
}

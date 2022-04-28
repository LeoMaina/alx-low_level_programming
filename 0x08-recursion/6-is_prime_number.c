#include "main.h"

/**
 * prime - checks for prime numbers
 * @n: number
 * @divisor: divisor starting from 3 incrementing
 * Return: 1 if prime and ) if not
 */
int prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (prime(n, divisor + 1));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: number to be checked
 * Return: 1 if prime number and 0 if otheriwse
 */
int is_prime_number(int n)
{
	int divisor = 3;

	if (n < 2 || n % 2 == 0)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime(n, divisor));
}

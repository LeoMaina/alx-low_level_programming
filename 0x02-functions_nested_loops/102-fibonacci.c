#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0
 */
int main(void)
{
	long i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j == 20365011074)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}

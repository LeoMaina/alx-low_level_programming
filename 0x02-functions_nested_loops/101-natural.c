#include <stdio.h>

/**
 * main - compute
 *
 * Return: 0
 */
int main(void)
{
	int a, sum;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (0);
}

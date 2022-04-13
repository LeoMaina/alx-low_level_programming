#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print num from n to 98
 *
 * @n: paramter to start with
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%d", i);
		}
		else
		{
		printf("%d, ", i);
		}
	}
	printf("\n");
}


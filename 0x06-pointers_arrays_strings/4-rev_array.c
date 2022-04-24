#include "main.h"

/**
 * reverse_array - fucntion to revrse an array
 *
 * @n: number of elements
 * @a: array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;
	int end = n - 1;

	while (i < end)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		i++;
		end--;
	}
}

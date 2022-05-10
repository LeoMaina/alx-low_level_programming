#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers from min to max in that order.
 *
 * @min: min
 * @max: max
 * Return: pointer to memory location
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}

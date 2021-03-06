#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to a fucntion that takes parameters of type int
 * and returns a pointer to int
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: array of elements
 * @size: size of the array
 * @action: pointer to a fucntion that accepts parameters of type int
 * and return a void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

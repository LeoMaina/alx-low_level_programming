#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of
 * characters and initializes it with a specific char
 *
 * @size: size of array
 * @c: character to intialize the array with
 * Return: array created
 */
char *create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	buf = malloc(sizeof(c) * size);

	if (buf == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buf[i] = 'H';
	}
	return (buf);
}

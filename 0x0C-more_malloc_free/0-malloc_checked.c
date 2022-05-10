#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - fucntion that allocates memory using malloc
 *
 * @b: size of block of memory to be allocated
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

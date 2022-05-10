#include "main.h"
#include <stdlib.h>

/**
 * _realloc - fucntion that reallocates memory block using malloc and free
 * @ptr: pointer to previous block of memory
 * @old_size: size in bytes of the prev allocated space
 * @new_size: new size in bytes of the new memory block
 * Return: if new_size == old_size return ptr
 * if ptr is NULL return memory called by malloc(new_size)
 * if new_size = 0 and ptr != NULL , free ptr return NULL
 * if malloc fails return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

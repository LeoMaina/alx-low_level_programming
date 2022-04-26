#include <unistd.h>

/**
 * main - entry
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

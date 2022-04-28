#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: return charcater
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

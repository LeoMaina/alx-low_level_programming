#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("The size of char is %c byte(s)\n", sizeof(char));
	printf("The size of int is %c byte(s)\n", sizeof(int));
	printf("The size of long int is %c byte(s)\n", sizeof(long int));
	printf("The size of long long int is %c byte(s)\n", sizeof(long long int));
	printf("The size of float is %c byte(s)\n", sizeof(float));

	return (0);
}

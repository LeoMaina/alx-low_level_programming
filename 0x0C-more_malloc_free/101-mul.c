#include "main.h"
#include <stdlib.h>

/**
 * main - function that mul two positive numbers
 *
 * @argc: count
 * @argv: parameter array
 *
 * Return - pointer to mul
 */
int main(int argc, char *argv[])
{
	int *num1;
	int *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(argv[i] >= '0' && argv[i] <= '9'))
			{
				printf("error\n");
				exit (98);
			}
			else
			{



#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: count
 * @argv: pointer to array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ans;
	
	if (argc == 3)
	{
		ans = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ans);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

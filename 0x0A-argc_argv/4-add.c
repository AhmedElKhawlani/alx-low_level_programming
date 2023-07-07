#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - shows the addition of two numbers passed in parameters
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if success, 1 Otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, q;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				puts("Error");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

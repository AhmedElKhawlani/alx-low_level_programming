#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Shows the multiplication of two numbers passed in parameters;
 * @argc: Number of arguments;
 * @argv: Array of arguments;
 * Return: 0 if success, 1 Otherwise.
 */

int main(int argc, char *argv[])
{
	int pow, n, m;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	pow = n * m;
	printf("%d\n", pow);
	return (0);
}

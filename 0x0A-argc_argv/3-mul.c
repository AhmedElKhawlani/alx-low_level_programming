#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - shows the multiplication of two numbers passed in parameters
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if success, 1 Otherwise
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc >= 3)
	{
		int pow;

		pow = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", pow);
		return (0);
	}
}

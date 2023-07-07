#include "main.h"
#include <stdio.h>

/**
 * main - prints the names of all the passed arguments
 * @argc: Number of arguments
 * @argv: Vector of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the executable
 * followed by a new line
 * @argc : Number of arguments
 * @argv : Array of arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

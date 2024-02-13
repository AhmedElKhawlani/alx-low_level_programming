#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of passed arguments;
 * @argc: Number of arguments;
 * @argv: Array that contains names of arguments;
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

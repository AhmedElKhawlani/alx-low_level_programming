#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of passed arguments
 * @argc : number of arguments
 * @argv : array that contains names of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

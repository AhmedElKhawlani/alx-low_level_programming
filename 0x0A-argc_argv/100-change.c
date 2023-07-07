#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the number of coins
 * @argc : Number of arguments
 * @argv : Array of arguments
 * Return: 0 if success, 1 Otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int coins = 0;
	int sum = atoi(argv[1]);

	while (sum >= 25)
	{
		sum = sum - 25;
		coins = coins + 1;
	}
	while (sum >= 10)
	{
		sum = sum - 10;
		coins = coins + 1;
	}
	while (sum >= 5)
	{
		sum = sum - 5;
		coins = coins + 1;
	}
	while (sum >= 2)
	{
		sum = sum - 2;
		coins = coins + 1;
	}
	coins = coins + sum;
	printf("%d\n", coins);
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line;
 * @l: Array to be printed;
 * @n: Number of elements to print.
 */

void print_array(int *l, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", l[i]);
		else
			printf(", %d", l[i]);
	}
		printf("\n");
}

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from a to 98,
 * followed by a new line
 * @a: print from this number to 98
 */
void print_to_98(int a)
{
	int i, j;

	if (a <= 98)
	{
		for (i = a; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (a >= 98)
	{
		for (j = a; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}

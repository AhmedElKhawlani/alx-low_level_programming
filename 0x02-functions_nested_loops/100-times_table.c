#include "main.h"

/**
 * print_times_table - Prints the b times table, starting with 0;
 * @b: Number of the times table.
 */
void print_times_table(int b)
{
	int i, j, k;

	if (b >= 0 && b <= 15)
	{
		for (i = 0; i <= b; i++)
		{
			for (j = 0; j <= b; j++)
			{
				k = j * i;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				} else if (k >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

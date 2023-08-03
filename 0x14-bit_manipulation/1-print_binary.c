#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Number to convert and print
 */

void print_binary(unsigned long int n)
{
	int number_of_bytes;
	int number_of_bits;
	int temp_byte;
	int i;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	number_of_bytes = sizeof(n);
	number_of_bits = number_of_bytes * 8;
	i = number_of_bits - 1;
	while (((n >> i) & 1) == 0)
		i--;
	for (j = i; j >= 0; j--)
	{
		temp_byte = (n >> j) & 1;
		if (temp_byte == 1)
			_putchar('1');
		if (temp_byte == 0)
			_putchar('0');
	}
}

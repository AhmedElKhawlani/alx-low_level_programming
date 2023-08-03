#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: Integer to explore
 * @index: position of bit to return
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	
	if (n == 0 && index < 64)
		return (0);
	i = 0;
	while (i <= 63)
	{
		if (index == i)
			return (n & 1);
		n >>= 1;
		i++;
	}
	return (-1);
}

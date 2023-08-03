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
	int r;
	
	if (n == 0 && index > 0)
		return (-1);
	if (n == 0)
		return (0);
	
	i = 0;
	while (i <= index && n != 0)
	{
		r = n % 2;
		n = n / 2;
		i++;
	}
	if (n == 0 && i < index)
		return (-1);
	return (r);
}

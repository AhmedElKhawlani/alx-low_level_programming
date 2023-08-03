#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n: pointer of the integer
 * @index: index of the bit to set to 1.
 *
 * Return: 1 if success, -1 if fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index >= 64)
		return (-1);
	p = 1 << index;
	*n = (*n | p);
	return (1);
}
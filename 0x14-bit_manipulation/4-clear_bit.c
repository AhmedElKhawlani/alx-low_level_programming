#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an integer
 * @index: index of the bit to clear
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index >= 64)
		return (-1);
	p = 1 << index;
	if (*n & p)
		*n ^= p;
	return (1);
}
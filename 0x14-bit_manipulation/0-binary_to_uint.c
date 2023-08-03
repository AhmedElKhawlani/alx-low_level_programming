#include "main.h"

/**
 * power - Returns the power of an unsigned int by an unsigned int
 * @a: The base
 * @n: The power
 * Return: a^n
 */

unsigned int power(unsigned int a, unsigned int n)
{
	unsigned int p;
	unsigned int i;

	p = 1;
	for (i = 1; i <= n; i++)
		p = p * a;
	return (p);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a string representing the binary number
 * Return: The decimal conversion of b (if success), 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int s;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 0 && b[i] != 1)
			return (0);
		s = s + b[i] * power(2, i);
	}
	return (s);
}

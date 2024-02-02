#include "main.h"

/**
 * *_memset - Fills memory with a constant byte;
 * @m: Memory area to be filled;
 * @c: Char to copy;
 * @n: Number of times to copy b;
 * Return: Pointer to the memory area s.
 */

char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}

	return (m);
}

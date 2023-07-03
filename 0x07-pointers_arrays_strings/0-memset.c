#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @m: memory area to be filled
 * @c: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}

	return (mem);
}

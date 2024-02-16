#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Fills memory with a constant byte;
 * @string: Memory area to be filled;
 * @b: Char to copy;
 * @n: Number of times to copy b;
 * Return: Pointer to the memory area s.
 */

char *_memset(char *string, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		string[k] = b;
	}

	return (string);
}

/**
 * *_calloc - Allocates memory for an array using malloc;
 * @nmemb: Number of elements in the array;
 * @size: Size of each element;
 * Return: Pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

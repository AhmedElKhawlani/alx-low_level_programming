#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @string: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
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
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
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
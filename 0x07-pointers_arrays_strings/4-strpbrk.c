#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes;
 * @st: String to search;
 * @acc: String containing the bytes to look for;
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *st, char *acc)
{
	int i, j;

	for (i = 0; *st != '\0'; i++)
	{
		for (j = 0; acc[j] != '\0'; j++)
		{
			if (*st == acc[j])
			{
				return (st);
			}
		}
		st++;
	}

	return (NULL);
}

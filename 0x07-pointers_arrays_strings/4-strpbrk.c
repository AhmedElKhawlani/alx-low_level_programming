#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @st: string to search
 * @acc: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
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

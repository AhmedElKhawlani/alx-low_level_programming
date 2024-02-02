#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest;
 * @destination: Pointer to the buffer in which we copy the string;
 * @source: String to be copied;
 * Return: the pointer to dest.
 */

char *_strcpy(char *destination, char *source)
{
	int len, i;

	len = 0;

	while (source[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';

	return (destination);
}

#include "main.h"

/**
 * _strlen - Returns the length of a string;
 * @ch: String to evaluate;
 * Return: The length of the string.
 */

int _strlen(char *ch)
{
	int i;

	i = 0;

	while (ch[i] != '\0')
	{
		i++;
	}

	return (i);
}

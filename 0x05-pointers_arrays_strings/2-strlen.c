#include "main.h"

/**
 * _strlen - returns the length of a string
 * @ch: string to evaluate
 *
 * Return: the length of the string
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

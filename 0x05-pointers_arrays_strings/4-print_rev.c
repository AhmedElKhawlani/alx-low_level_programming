#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line;
 * @ch: String to be printed.
 */

void print_rev(char *ch)
{
	int i, j, len;

	i = 0;

	while (ch[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(ch[j]);
	}

	_putchar('\n');
}

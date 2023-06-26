#include "main.h"

/**
 * rev_string - reverses a string
 * @ch: string to be reversed
 */
void rev_string(char *ch)
{
	char tmp;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (ch[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = ch[i];
		ch[i] = ch[len1];
		ch[len1--] = tmp;
	}
}

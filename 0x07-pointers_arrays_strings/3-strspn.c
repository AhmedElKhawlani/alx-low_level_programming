#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @st: string to evaluate
 * @acc: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *st, char *acc)
{
	int i, j, f, fl;

	f = 0;

	for (i = 0; st[i] != '\0'; i++)
	{
		fl = 0;
		for (j = 0; acc[j] != '\0'; j++)
		{
			if (st[i] == acc[j])
			{
				f++;
				fl = 1;
			}
		}
		if (fl == 0)
		{
			return (f);
		}
	}

	return (0);
}
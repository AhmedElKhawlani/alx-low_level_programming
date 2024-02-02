#include "main.h"

/**
 * *_strspn - Gets the length of a prefix substring;
 * @st: String to evaluate;
 * @acc: String containing the list of characters to match in s;
 * Return: The number of bytes in the initial segment,
 * of s which consist only of bytes from accept.
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

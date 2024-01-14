#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e, followed by a new line
 * Return: Aways 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

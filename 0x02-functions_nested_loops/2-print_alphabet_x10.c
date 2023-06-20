#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line.
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
int b = 0;
while (b < 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
b++;
}
return (0);
}

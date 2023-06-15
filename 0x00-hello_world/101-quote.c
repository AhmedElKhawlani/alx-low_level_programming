/*
 * 101-quote.c
 * EL KHAWLANI Ahmed - ALX Student - elkhawlani.python@gmail.com
 */

#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *                Not allowed to use any functions listed in the NAME section,
 *               of the man (3) printf or man (3) puts
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      59);

	return (1);
}

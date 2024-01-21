#include <stdio.h>
#include <math.h>

int is_prime(long int n);

/**
 * main - Finds and prints the largest prime factor of the number 612852475143;
 * Return: Always 0.
 */
 
int main(void)
{
	long int n;
	long int i;

	n = 612852475143;

	for (i = n; i > 2; i = i - 2)
	{
		if (is_prime(i))
		{
			printf("%ld\n", i);
			return (0);
		}
	}
	return (0);
}

/**
 * is_prime - Checks if an integer is prime or not;
 * @n: Integer to check;
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(long int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
	{
		long int d;
		
		for (d = 2; d < n; d++)
		{
			if (n % d == 0)
				return (0);
		}
		return (1);
	}
}
		

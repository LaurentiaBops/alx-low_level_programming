#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is prime.
 * @n: an input integer
 * Return: 1 if n is prime or  0 in otherwise
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}

int prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n/i) < i)
		return (1);

	return (prime(n, i + 1));
}

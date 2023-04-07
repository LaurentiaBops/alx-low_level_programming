#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(n, 1));
}

/**
 * _sqrt - find square root
 * @n: number to calculate square root
 * @i: temporary storage for approximation
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	int sqrt == i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	
	return (_sqrt(n, i + 1));
}

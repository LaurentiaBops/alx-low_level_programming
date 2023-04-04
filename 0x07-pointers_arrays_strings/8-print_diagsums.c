#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, n = 0, sqre = size * size, sum1 = 0, sum2 = 0;

	for (; i <= sqre; i = i + size + 1)
		sum1 = sum1 + a[i];

	for (n = size - 1; n <= sqre - size; n = n + size - 1)
		sum2 = sum2 + a[n];

	printf("%d, %d\n", sum1, sum2);
}

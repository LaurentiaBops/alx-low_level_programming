#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of array followed by line
 * @a: an input array
 * @n: an input integer
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}

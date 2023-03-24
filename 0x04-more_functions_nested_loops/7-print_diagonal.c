#include "main.h"

/**
 * print_diagonal - Draws a diagonal accross the terminal
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i , j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

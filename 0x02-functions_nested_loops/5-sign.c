#include "main.h"

/**
 * print_sign - Negative or Positive
 * @n: Input variable
 * Return: 1 for positive integer, -1 for positive, 0 for otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

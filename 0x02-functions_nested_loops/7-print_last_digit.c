#include "main.h"

/**
 * print_last_digit - Display last number
 * @n : Input variable
 * Return: Last digit of number
 */

int print_last_digit(int n)
{

	int last;
	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}

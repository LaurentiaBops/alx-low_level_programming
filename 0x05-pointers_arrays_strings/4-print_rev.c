#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: string input
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i)
		_putchar(s[--i]);

	_putchar('\n');
}

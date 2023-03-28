#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string input
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of string followed by line
 * @str: string input
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i;
	int len;
	int y;
	int n;

	len = strlen(str);
	y = len / 2;
	n = (len - 1) / 2;

	if ((len % 2) == 0)
	{
		for (i = 0; (i + y) < len; i++)
		{
			_putchar(str[i + y]);
		}
	}
	if ((len % 2) != 0)
	{
		for (i = 0; (i + n) < len; i++)
		{
			_putchar(str[i + n]);
		}
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string
 * @str: String input
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	char len;
	int i;

	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if ((i % 2) != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

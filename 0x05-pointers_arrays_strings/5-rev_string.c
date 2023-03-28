#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Function that reverses a string
 * @s: string to be reversed
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i;
	int len;
	char n;

	len = strlen(s);

	for (i = 0; i < len/2; i++)
	{
		n = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = n;
	}
}

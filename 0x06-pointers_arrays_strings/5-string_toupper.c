#include "main.h"

/**
 * string_toupper - Change all lowercase to uppercase
 * @s: input string
 * Return: Uppercase string
 */

char *string_toupper(char *s)
{
	char *temp = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}

	return (temp);
}

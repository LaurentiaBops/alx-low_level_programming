#include "main.h"

/**
 * cap_string - Capitalize words before separators
 * @s: String input
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s -= 32;

		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == ',' || s[i] == ';' || s[i] == '.'
	        || s[i] == '!' || s[i] == '?' || s[i] == '"'
		|| s[i] == '(' || s[i] == ')' || s[i] == '{'
		|| s[i] == '}') && (s[i + i] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}

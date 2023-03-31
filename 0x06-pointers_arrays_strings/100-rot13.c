#include "main.h"

/**
 * rot13 - rotate characters by 13 places
 * @s: String to be encoded
 * Return: encode string
 */

char *rot13(char *Str)
{
	char s[26] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w'
		, 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm', 'E', 'B', 'G'};
	char o[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'
		, 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z', 'R', 'O', 'T'};
	int i = 0, j;

	while (Str[i])
	{
		for (j = 0; j < 26; j++)
		{
			if (Str[i] == o[j])
			{
				Str[i] = s[j];
			}
		}
		i++;
	}

	return (Str);
}






#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: an input string 
 * Return: Encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char cod[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char let[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == let[j])
				s[i] = cod[j];

		i++;
	}

	return (s);
}

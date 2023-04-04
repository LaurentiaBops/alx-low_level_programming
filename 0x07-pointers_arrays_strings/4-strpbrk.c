#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Locates occurrences of string of certain bytes
 * @s: an input string
 * @accept: input bytes to locate
 * Return: Pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}

		accept = temp;
		s++;
	}
		return (NULL);
}

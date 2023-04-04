#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: an input string 
 * @c: an input character to search for
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, m = 0, n = 0, l=0;

	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		i++;
	}
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		m++;
	}
	l = m + i;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
		return (NULL);
	for (; n < l; l++)
	{
		if (n < i)
		{
			s[n] = s1[n];
			s1++;
		}
		else
		{
			s[n] = s2[n];
			s2++;
		}
	}
	s[n] = '\0';
	return (s);
}

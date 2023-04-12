#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input pointer of the first string
 * @s2: input pointer of the second string
 * Return: pointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new, *new1, *new2;
	int i = 0, l = 0, k = 0;

	new1 = s1;
	new2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		l++;
		s1++;
	}
	s1 = new1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		k++;
		s2++;
	}
	s2 = new2;
	new = malloc(sizeof(char) * (l + k + 1));
	new1 = new;
	if (new == NULL)
		return (NULL);
	for (; i < (l + k); i++)
	{
		if (i < l)
		{
			new[i] = *s1;
			s1++;
		}
		else
		{
			new[i] = *s2;
			s2++;
		}
	}
	new[i] = '\0';
	return (new);
}

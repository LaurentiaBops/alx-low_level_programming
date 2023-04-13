#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that concatenates two strings
 * @s1: input of first string
 * @s2: input of the second string
 * @n:  number of string 2 to concatenate
 * Return: pointer to concatened strings or NULL if str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int i = 0, l = 0, b = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[l])
		l++;

	if (s2 == NULL)
		s2 = "";

	while (s2[b])
		b++;

	if (n >= b)
		n = b;

	temp = malloc(l + b + 1);
	if (temp == NULL)
		return (NULL);

	for (; i < (l +n); i++)
	{
		if (i < l)
		{
			temp[i] = *s1;
		       	s1++;
		}
		else
		{
			temp[i] = *s2;
		       	s2++;
		}
	}
	temp[i] = '\0';
	return (temp);
}

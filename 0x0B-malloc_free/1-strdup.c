#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory containing copy of given string
 * @str: String to be copied
 * Return: pointer to copied string or NULL ifnot enough memory
 */
char *_strdup(char *str)
{
	char *s;
	int i = 1, n = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (n < i)
	{
		s[n] = str[n];
		n++;
	}

		s[n] = '\0';
		return (s);
}

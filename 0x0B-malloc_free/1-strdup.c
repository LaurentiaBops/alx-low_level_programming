#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input string to be copied.
 * Return: Pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *s;
	unsigned long int i = 0;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * sizeof(str));

	while (i < sizeof(str))
	{
		s[i] = str[i];
		i++;
	}

	free(s);
	return (s);
}

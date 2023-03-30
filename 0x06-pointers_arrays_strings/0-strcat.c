#include "main.h"

/**
 * _strcat - Appends src string onto dest string
 *
 * @dest: first input string
 * @src: second input string to be appended
 * Return: Pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i;

	while (*dest)
	{
		dest++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		*dest++ = src[i];
	}

	*dest = '\0';
	return (dest);
}

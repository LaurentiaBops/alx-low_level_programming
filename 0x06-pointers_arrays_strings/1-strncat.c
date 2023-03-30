#include "main.h"

/**
 * _strncat: Concentrates two strings using at most inputted bytes 
 * @dest: String to be appended
 * @src: String to append
 * @n: maximum bytes from src to append
 * Return: Pointer to appended string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i;

	while (*dest)
	{
		dest++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		*dest++ = src[i];
	}

	*dest =  '\0';
	return (temp);
}

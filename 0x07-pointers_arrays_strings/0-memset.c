#include "main.h"

/**
 * _memset - Fills memory with constant bytes
 * @s: Area pointed to
 * @b: constant byte to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (temp);
}

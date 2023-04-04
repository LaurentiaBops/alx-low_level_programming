#include "main.h"

/**
 * _memcpy - copies from one memory location to another
 * @src: location to be copied from
 * @dest: location being copied to
 * @n: input bytes being copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (temp);
}

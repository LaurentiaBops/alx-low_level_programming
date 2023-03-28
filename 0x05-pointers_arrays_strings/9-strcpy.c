#include "main.h"

/**
 * _strcpy - Copy string onto buffer
 *
 * @dest: buffer pointer
 * @src: string pointer
 *
 * Return: Pointer to buffer
 */

char *_strcpy(char *dest, char *src)
{
	char *pointer;

	*pointer = dest;
	
	while (*src)
		*dest++ = *src++;
	return (pointer);
}


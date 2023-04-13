#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	temp = malloc(nmemb * size);
	if (temp == NULL)
		return (NULL);

	while (i < nmemb * size)
		temp[i] = 0, i++;

	return (temp);
}

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input integer
 * Return: pointer to allocated memory otherwise NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
		exit(98);

	return (t);
}

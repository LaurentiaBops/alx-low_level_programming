#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: input to be allocated
 * Returns: pointer to memory otherwise 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	void *t;
       
	t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}

	return (t);
}


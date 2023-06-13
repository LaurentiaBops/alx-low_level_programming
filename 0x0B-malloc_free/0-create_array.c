#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars initializing it with a specific char.
 * @size: The size of array
 * @c: A character to initialize array
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

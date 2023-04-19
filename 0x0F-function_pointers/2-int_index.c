#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: A pointer to array
 * @size: Number of array elements
 * @cmp: Function that compares values
 * Return: The index of the first element the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}

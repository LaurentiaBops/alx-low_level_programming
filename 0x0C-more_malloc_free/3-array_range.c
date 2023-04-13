#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	arr = malloc((diff + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
		new_array[i] = min++;

	return (new_array);
}


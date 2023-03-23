#include "main.h"

/**
 * _isdigit - A function that checks for a digit,
 * between 0 and 9
 * @c: input integer
 * Returns 1 if digit otherwise returns 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i == c)
	{
	return (1);
	}
	return (0);
	}
}


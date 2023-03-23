#include "main.h"

/**
 * _abs - Prints absolute value
 * @c: Integer input
 * Return: Absolute value otherwise 0
 */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}

#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: An input character
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char i;
	int low  = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == c)
	low = 1;
	}
	return (low);
}

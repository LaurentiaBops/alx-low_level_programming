#include "main.h"

/**
 * _isdigit - A function that checks for a digit,
 * between 0 and 9
 * @c: input integer
 * Returns 1 if digit otherwise return 0
 */
int _isdigit(int c)
{
	char i;
	int digit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			digit = 1;
			break;
		}
	}

	return (digit);
}

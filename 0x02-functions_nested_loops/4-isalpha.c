#include "main.h"

/**
 * _isalpha - Alphabetic character
 * @c: Input character
 * Return: 1 for letter or 0 for otherwise
 */

int _isalpha(int c)
{
	char low, up;
	int letter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low || c == up)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}

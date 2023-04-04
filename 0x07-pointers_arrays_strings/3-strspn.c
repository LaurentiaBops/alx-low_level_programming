#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets length of prefix substring
 * @s: an input string
 * @accept: bytes to return from s
 * Returns: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int check;
	char *temp = accept;

	while (*s)
	{
		check = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				i++;
				check = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = temp;
		if (check == 0)
		{
			break;
		}
	}
	
	return (i);
}

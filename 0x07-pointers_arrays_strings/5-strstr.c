#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: an input string
 * @needle: substring to be located
 * Returns pointer to beginning of string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *temp = needle;

	while (*haystack)
	{
		i = 0;
		
		while (*needle)
		{
			if (*haystack == *needle)
			{
				i = 1;
				temp = needle;
				break;
			}
			needle++;
		}
		haystack++;
		if (i == 0)
		{
			break;
		}
	}
	return (temp);
}

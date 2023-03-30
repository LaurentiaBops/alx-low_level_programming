#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: String to be copied onto
 * @src: String to be copied
 * n: maximum amount of bytes
 * Return: Pointer to string dest
 */

 char *_strncpy(char *dest, char *src, int n)
           {
               int i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }

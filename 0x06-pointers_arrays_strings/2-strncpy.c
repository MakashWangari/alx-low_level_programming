#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: string copy dest
 * @src: source copy of string
 * @n: Maximum no of chars to copy
 * Return: dest;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		if (index < n)
		{
			dest[index] = src[index];
		}
	}
	for (; index < n; index++)
	{
	dest[index] = '\0';
	}
	return (dest);
}

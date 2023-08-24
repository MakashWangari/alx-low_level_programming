#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: destination string
 * @src: Source String to concatate
 * @n: maximum no of bytes from src
 * Return: pointer to concetated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int lengthb;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (lengthb = 0; src[lengthb] != '\0'; lengthb++)
	{
		if (lengthb < n)
		{
			dest[length + lengthb] = src[lengthb];
		}
	}
	dest[length + lengthb] = '\0';
	return (dest);
}

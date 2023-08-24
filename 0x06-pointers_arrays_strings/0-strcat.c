#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: destination string
 * @src: Source String to concatate
 * Return: pointer to concetated string
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int lengthb;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (lengthb = 0; src[lengthb] != '\0'; lengthb++)
	{
		dest[length + lengthb] = src[lengthb];
	}
	dest[length + lengthb] = '\0';
	return (dest);
}

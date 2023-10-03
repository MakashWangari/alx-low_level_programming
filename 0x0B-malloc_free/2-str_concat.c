#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return:  pointer to the array.
 */
char *str_concat(char *s1, char *s2)
{
	int index, indexb, consize;
	int size = 0;
	int length = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size = 0; s1[size] != '\0'; size++)
	{
	}
	for (length = 0; s2[length] != '\0'; length++)
	{
	}
	consize = size + length;
	s = malloc((consize + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		s[index] = s1[index];
	}
	for (indexb = 0; indexb < length; indexb++)
	{
		s[index + indexb] = s2[indexb];
	}

	s[consize] = '\0';
	return (s);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies a parameter string
 * @str: string to be copied
 *
 * Return:  pointer to the array.
 */
char *_strdup(char *str)
{
	int index = 0;
	int size = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size] != '\0'; size++)
	{
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (index < size)
	{
		s[index] = str[index];
		index++;
	}
	s[size] = '\0';
	return (s);
}

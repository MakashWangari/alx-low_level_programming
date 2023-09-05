#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - an array of chars & initializes it with a spec char.
 * @size: the size of the array
 * @c: character to initialize array
 *
 * Return:  pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{s[index] = c;
	}
	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function that copies string
 * @str: string to be copied
 *
 * Return: Pointer to the dup array
 */
char *_strdup(char *str)
{
	int index, i = 0;
	char *dupstr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	dupstr = malloc(sizeof(char) * (i + 1));
	if (dupstr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < i; index++)
	{
		dupstr[index] = str[index];
	}
	dupstr[i] = '\0';
	return (dupstr);
}

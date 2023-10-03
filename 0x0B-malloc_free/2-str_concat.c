#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concantates string
 * @s1: string one
 * @s2: string two
 *
 * Return: Pointer to the conc string
 */
char *str_concat(char *s1, char *s2)
{
	int index, indexb, size, a = 0, i = 0;
	char *combstr;

	if (s1 == NULL)
		i = 0;
	else
		while (s1[i] != '\0')
		{
			i++;
		}
	if (s2 == NULL)
	{
		a = 0;
	}
	else
		while (s2[a] != '\0')
		{
			a++;
		}
	size = a + i;
	combstr = malloc(sizeof(char) * (size + 1));
	if (combstr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < i; index++)
	{
		combstr[index] = s1[index];
	}
	for (indexb = 0; indexb < a; index++)
	{
		combstr[i + indexb] = s2[indexb];
	}
	combstr[a + i] = '\0';
	return (combstr);
}

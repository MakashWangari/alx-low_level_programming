#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or difference.
 */
int _strcmp(char *s1, char *s2)
{
	int index;
	int indexb;
	int n;

	for (index = 0; s1[index] != '\0'; index++)
	{

	}
	for (indexb = 0; s2[indexb] != '\0'; indexb++)
	{

	}
	if (index != indexb)
	{
		return (index - indexb);
	}
	else
	{
		for (n = 0; n < index; n++)
		{
			if (s1[n] != s2[n])
				return (s1[n] - s2[n]);
		}
		return (0);
	}
}

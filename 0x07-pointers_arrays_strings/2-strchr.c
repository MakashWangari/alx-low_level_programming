#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: source string to be checked.
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return (0);
}

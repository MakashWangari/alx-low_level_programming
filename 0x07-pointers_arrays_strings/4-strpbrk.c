#include "main.h"

/**
 *  *_strpbrk - a function that searches a string for any of a set of bytes.
 *  @s: first string
 *  @accept: string to match against
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;
	int indexb;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (indexb = 0; accept[indexb] != '\0'; indexb++)
		{
			if (s[index] == accept[indexb])
			{
				return (&s[index]);
			}
		}

	}
	return (0);
}

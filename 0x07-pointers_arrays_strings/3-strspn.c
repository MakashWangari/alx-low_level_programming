#include "main.h"

/**
 *  _strspn - function that gets the length of a prefix substring.
 *  @s: first string
 *  @accept: string to match against
 *
 * Return: No of matching bytes or 0 if none.
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	int indexb;

	for (index = 0; s[index] >= '\0'; index++)
	{
		for (indexb = 0; accept[indexb] > '\0'; indexb++)
		{
			if (s[index] == accept[indexb])
			{
				break;
			}
		}
		if (accept[indexb] == '\0')
		{
			return (index);
		}
	}
	return (index);
}

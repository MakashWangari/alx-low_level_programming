#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @string: string to be capitalized.
 * Return: Always string.
 */
char *cap_string(char *string)
{
	int index;
	int indexb;
	char sep[] = " \t\n,;.!?\"(){}";

	for (index = 0; string[index] != '\0'; index++)
	{
		for (indexb = 0; sep[indexb] != '\0'; indexb++)
		{
			if (string[index] == sep[indexb])
			{
				if (string[index + 1] >= 'a' && string[index + 1] <= 'z')
				{
					string[index + 1] = string[index + 1] - 'a' + 'A';

				}
			}
		}
	}
	return (string);
}

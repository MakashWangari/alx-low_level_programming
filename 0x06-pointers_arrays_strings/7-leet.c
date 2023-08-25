#include "main.h"

/**
 * *leet -  encodes a string into 1337.
 * @string: string to be encoded
 * Return: String
 */
char *leet(char *string)
{
	int index = 0;
	int indexb;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (index = 0; string[index] != '\0'; index++)
	{
		for (indexb = 0; b[indexb] != '\0'; indexb++)
		{
			if (string[index] == a[indexb])
			{
				string[index] = b[indexb];
			}
		}
	}
	return (string);
}

#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the char to be checked
 * Return: 1 or 0 depnding on case
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
}

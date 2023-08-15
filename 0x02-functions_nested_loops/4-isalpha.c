#include "main.h"

/**
 * _isalpha - checks for lowe-upper rcase character
 * @c: letter to be checked
 * * Return:1 for either lower or upper case otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}

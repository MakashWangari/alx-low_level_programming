#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the char to be checked
 * Return: 1 or 0 depnding on case
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);
	else
		return (0);
}

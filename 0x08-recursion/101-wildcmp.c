#include "main.h"
int twincheck(char *s1, char *s2, int index);
int _strlen_recursion(char *s);

/**
 * wildcmp - checks if two strings are identical.
 * @s1: pointer to string 1.
 * @s2: pointer to a string2.
 *
 * Return: 1 if identical or, 0 if otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	int length1, length2;

	length1 = _strlen_recursion(s1);
	length2 = _strlen_recursion(s2);
	if (length1 != length2)
		return (0);
	return (twincheck(s1, s2, 0));
}
/**
 * twincheck - checks whether two strings are identical
 * @s1: pointer to string 1.
 * @s2: pointer to string 2.
 * @index: traversing the string
 *
 * Return: 1 if identical  0 otherwise
 */
int twincheck(char *s1, char *s2, int index)
{
	if (s1[index] == '\0')
		return (1);
	if (s1[index] != s2[index])
	{
		if (s2[index] != '*')
			return (0);
	}
	return (twincheck(s1, s2, index + 1));
}
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: stringth to return length
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

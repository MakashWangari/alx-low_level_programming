#include "main.h"
int symmetry(char *s, int index, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is a palnidrome
 * @s: pointer to a string
 *
 * Return: 1 or, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length;

	if (*s == '\0')
		return (1);
	length = _strlen_recursion(s);
	return (symmetry(s, 0, length - 1));
}
/**
 * symmetry - checks whether a string is a palindrome
 * @index: tranverses the loop forward
 * @length: tranverses the length backward.
 * @s: pointer to string to check
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int symmetry(char *s, int index, int length)
{
	if (index >= length)
		return (1);
	if (s[index] != s[length])
		return (0);
	return (symmetry(s, index + 1, length - 1));
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

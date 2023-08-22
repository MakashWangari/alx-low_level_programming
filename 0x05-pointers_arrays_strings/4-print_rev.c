#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: straing of characters to be output
 * Return: Void.
 */
void print_rev(char *s)
{
	int pos = 0;

	while (s[pos] != '\0')
	{
		pos++;
	}
	while (pos-- > 0)
	{
		_putchar(s[pos]);
	}
	_putchar('\n');
}

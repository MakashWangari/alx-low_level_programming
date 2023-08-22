#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: point variable
 * Return: Void.
 */
void _puts(char *str)
{
	int indx = 0;

	while (str[indx] != '\0')
	{
		_putchar(str[indx]);
		indx++;
	}
	_putchar('\n');
}

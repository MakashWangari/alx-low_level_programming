#include "main.h"

/**
 * puts2 - check the code
 * @str: string of char
 * Return: Void.
 */
void puts2(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		_putchar(str[r]);
		r += 2;
	}
	_putchar('\n');
}

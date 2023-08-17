#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: length of line
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		char c = '_';

		for (i = 1; i <= n; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

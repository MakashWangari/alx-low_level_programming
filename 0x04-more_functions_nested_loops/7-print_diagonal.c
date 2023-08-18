#include "main.h"

/**
 * print_diagonal - check the code
 * @n: length of line
 * Return: Always void.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, b;

		for (l = 0; l < n; l++)
		{
			for (b = 0; b < l; b++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}


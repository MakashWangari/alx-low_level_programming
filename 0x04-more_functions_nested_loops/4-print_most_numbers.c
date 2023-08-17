#include "main.h"

/**
 * print_most_numbers - print no 0-9 less 2 &4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}

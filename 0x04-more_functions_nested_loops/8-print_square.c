#include "main.h"

/**
 * print_square - check the code
 * @size: size of square
 * Return: void.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;
		int c = size;

		while (c-- > 0)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

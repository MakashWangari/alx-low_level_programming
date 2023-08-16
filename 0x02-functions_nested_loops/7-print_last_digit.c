#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: no whose last digit to return
 * Return: last .
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar(last);
	return (last);
}

#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number to be checked
 * Return: 1,-1 or 0 depending on sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (-1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
}


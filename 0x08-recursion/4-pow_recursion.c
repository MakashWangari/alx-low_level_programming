#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: no to be raised
 * @y: power to raise no
 *
 * Return: raised no.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

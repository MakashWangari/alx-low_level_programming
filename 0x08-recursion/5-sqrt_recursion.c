#include "main.h"
int squarerootcheck(int n, int a);

/**
 * _sqrt_recursion - check the square root of a number
 * @n: no to check for squareroot.
 *
 * Return: the squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squarerootcheck(n, 0));
}
/**
 * squarerootcheck - check the square root of a number
 * @n: no to check for squareroot.
 * @a: no to subject to test.
 *
 * Return: the squareroot
 */
int squarerootcheck(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (squarerootcheck(n, a + 1));
}

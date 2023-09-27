#include "main.h"
int modulus(int n, int x);

/**
 * is_prime_number - checks in no is  a prime no
 * @n: integer to check for primality
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (modulus(n, 2));
}
/**
 * modulus - checks whether a no is divisble
 * @n: integer to check for divisibility
 * @x: divisor
 * Return: 1 or 0.
 */
int modulus(int n, int x)
{
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (modulus(n, x + 1));
}

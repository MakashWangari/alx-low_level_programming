#include <stdio.h>
#include <unistd.h>

/**
 * main - A program that prints to the std error
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return 1;
}

#include <stdio.h>

/**
  * main - Prints the numbers 0 to 9
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = 0 ; n <= 9 ; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');

	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies 2 nos.
 * @argc: Argument counter
 * @argv: Argument Vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int x, y, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mult = x * y;

	printf("%d\n", mult);
	return (0);
}

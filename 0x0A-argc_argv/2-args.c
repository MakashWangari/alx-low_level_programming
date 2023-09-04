#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its arguments.
 * @argc: Argument counter
 * @argv: Argument Vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

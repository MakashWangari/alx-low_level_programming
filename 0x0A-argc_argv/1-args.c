#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the no of arguments.
 * @argc: Argument counter
 * @argv: Argument Vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

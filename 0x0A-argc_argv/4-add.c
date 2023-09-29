#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive nos.
 * @argc: Argument counter
 * @argv: Argument Vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index, i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (index = 1; index < argc; index++)
	{
		for (i = 0; argv[index][i] != '\0'; i++)
		{
			if (!isdigit(argv[index][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}

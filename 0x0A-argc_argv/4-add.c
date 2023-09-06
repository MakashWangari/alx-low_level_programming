#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: Argument counter
 * @argv: Argument Vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int index, sum = 0;
	int num, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (index = 1; index < argc; index++)
	{
		i = 0;
		while (argv[index][i])
		{
			if (!isdigit(argv[index][i]))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		num = atoi(argv[index]);
		if (num >= 0)
		{
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

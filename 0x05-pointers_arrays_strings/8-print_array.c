#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: Array of integers to be printed
 * @n: no of integers to be displaye
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

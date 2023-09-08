#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: start of range.
 * @max: max range
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int index, elem;
	int *arry;

	if (min > max)
	{
		return (NULL);
	}
	elem = (max - min) + 1;
	arry = malloc(elem * sizeof(int));
	if (arry == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < elem; index++)
	{
		arry[index] = min;
		min++;
	}
	return (arry);
}

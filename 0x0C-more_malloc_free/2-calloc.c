#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: no of elements in the array
 * @size: the size in byte of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index, totalsize;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalsize = nmemb * size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < totalsize; index++)
	{
		ptr[index] = 0;
	}
	return (ptr);
}

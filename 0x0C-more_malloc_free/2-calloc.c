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
	unsigned int index;
	void *ptr;
	size_t totalsize;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalsize = (size_t)nmemb * (size_t)size;
	ptr = malloc(totalsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < nmemb; index++)
	{
		((char *)ptr)[index] = 0;
	}
	return (ptr);
}

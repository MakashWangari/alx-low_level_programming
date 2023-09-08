#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: no of elements in the array
 * @size: the size in byte of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        unsigned int index = 0;
        void *ptr;
	char *char_ptr;

        if (nmemb == 0 || size == 0)
        {
                return (NULL);
        }
        ptr = malloc(size * nmemb);
        if (ptr == NULL)
        {
                return (NULL);
        }
	char_ptr = (char *)ptr;
        while (index < nmemb)
        {
                char_ptr[index] = 0;
                index++;
        }
        return (ptr);
}

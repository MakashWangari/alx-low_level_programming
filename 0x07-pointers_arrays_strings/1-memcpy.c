#include "main.h"

/**
 * *_memcpy -  function that copies memory area.
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: no of bytesof bytes of memory to be filled.
 *
 * Return:  pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}

#include "main.h"

/**
 * *_memset - A function that fills memory with a constant byte.
 * @s: a pointer to the memory area s.
 * @b: The constant byte b.
 * @n: no of bytesof bytes of memory to be filled.
 *
 * Return:  pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}

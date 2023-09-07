#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: no of char to conc from s2
 *
 * Return: pointer to alloc mem.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lena = 0, lenb = 0, lenc, index, indexb;
	char *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lena] != '\0')
		lena++;
	while (s2[lenb] != '\0' && lenb < n)
		lenb++;
	lenc = lena + lenb + 1;
	conc = malloc(sizeof(char) * lenc);
	if (conc == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < lena; index++)
	{
		conc[index] = s1[index];
	}
	for (indexb = 0; indexb < lenb; indexb++)
	{
		conc[index + indexb] = s2[indexb];
	}
	conc[lenc - 1] = '\0';
	return (conc);
}

#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reversed
 * @n: the number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int catch = 0;
	int assign = n - 1;

	while (catch  < assign)
	{
		int hold = a[catch];

		a[catch] = a[assign];
		a[assign] = hold;
		catch++;
		assign--;
	}
}

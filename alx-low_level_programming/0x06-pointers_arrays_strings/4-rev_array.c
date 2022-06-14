#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: the array to reverse
 * @n: the size of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

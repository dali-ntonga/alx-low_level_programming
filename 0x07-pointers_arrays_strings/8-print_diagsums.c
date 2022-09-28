#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> Prints sum of two diags on a sqaure matrix
 * @a: input parameter
 * @size: input size of array
 * Return: Sum of square matrix
 **/

void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y];
		a += size;

	}

	for (y = 0; y < size; y++)
	{
		sum2 += a[y];
		a -= size;
	}
	printf("%d, %d/n", sum1, sum2);
}

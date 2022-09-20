#include "main.h"

/**
 * swap_int - swaps integers
 * @a: first variable
 * @b: second variable
 * Return: Void
 **/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

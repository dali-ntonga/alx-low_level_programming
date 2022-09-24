#include "main.h"

/**
 * add_strings - Adds numbers stored in strings.
 * @n1: string containing first number
 * @n2: strng containing second number
 * @r: the buffer to store the result.
 * @r_index: index of the buffer.
 *
 * Return: a pointer to the result or 0.
 **/

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);
	return (r + r_index + 1);
}

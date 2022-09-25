#include "main.h"

/**
 * _isupper -> Checks if the letters are uppercase
 * @c: input.
 * Return: 1 if c is uppercase else 0.
 **/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

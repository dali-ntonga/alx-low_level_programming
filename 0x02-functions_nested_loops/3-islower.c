#include "main.h"

/**
 * _islower - checks if lower case
 * @c : parameter to pass into function
 * Return: always 0
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar (1);
	}
	else
		_putchar (0);

	return (0);
}


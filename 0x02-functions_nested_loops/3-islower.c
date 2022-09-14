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
		return (1);
	}
	else
		return (0);
}


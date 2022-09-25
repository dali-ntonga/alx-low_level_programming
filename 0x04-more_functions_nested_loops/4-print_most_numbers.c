#include "main.h"

/**
 * print_most_numbers -> Prints most numbers except 2 & 4
 * Return: Void.
 **/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}

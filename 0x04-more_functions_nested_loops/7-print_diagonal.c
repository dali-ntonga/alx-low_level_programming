#include "main.h"

/**
 * print_diagonal -> Prints a diagonal line n chars long
 * @n: lenght of line
 * Return: Void.
 **/

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

#include <stdio.h>

/**
 * main - return a combo of two digits
 * Return: Success value
 **/

int main(void)
{
	int a, b;

	for (a = 0 ; a < 100 ; a++)
	{
		for (b = 0 ; b < 100 ; b++)
		{
			if (b > a)
			{
				putchar ((a / 10) + '0');
				putchar ((a % 10) + '0');
				putchar (' ');
				putchar ((b / 10) + '0');
				putchar ((b % 10) + '0');
				if (a != 98)
					putchar (',');
					putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}

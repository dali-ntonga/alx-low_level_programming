#include "main.h"

/**
 * jack_bauer- prints the time
 * Return: always 0
 **/

void jack_bauer(void);
{
	int hours = 0;
	int min = 0;
	int hours_remainder;
	int min_remainder;

	while (hours <= 23)
	{
		while (minute <= 59)
		{
		hours_remainder = hours % 10;
		_putchar (hours / 10 + '0');
		_putchar (hours_remainder + '0';
		_putchar (':');
		_putchar (minutes / 10 + '0');
		minutes++;
		_putchar ('\-n');
		}
		hours++;
		minutes = 0;
	}
}


#include "main.h"

/**
 * jack_bauer - Prints the time
 * _putchar - Prints characters 
 * Return: always 0
 **/

void jack_bauer(void)
int _putchar(char);
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int minutes_remainder;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
		hours_remainder = hours % 10;
		_putchar (hours / 10 + '0');
		_putchar (hours_remainder + '0');
		_putchar (':');
		_putchar (minutes / 10 + '0');
		_putchar (minutes_remainder + '0');
		minutes++;
		_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}

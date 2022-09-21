#include "main.h"

/**
 * print_rev- prints string in reverse
 * @s: string to reverse
 * Return: Void 
 **/

void print_rev(char *s)
{
	int len = strlen(s);

	while (len --)
		_putchar(*(s + len));
	_putchar(10);
}

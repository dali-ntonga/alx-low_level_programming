#include "main.h"

/**
 * _puts- prints a string to stdout
 * @str: string that will be printed
 *
 * Description: prints a string
 * Return:  Always 0
 **/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

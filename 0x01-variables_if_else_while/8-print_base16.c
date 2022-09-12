#include <stdio.h>

/**
 * main - prints hexadecimal
 *Return: always(success)
 **/

int main(void)
{
	char c;

	for (c = '1' ; c <= '9' ; c++)
	{
		putchar(c);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar ('\n');
	return (0);
}

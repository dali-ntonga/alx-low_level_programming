#include <stdio.h>
/**
 * main - print numbers '1' to '10'
 * Return: always(success)
 **/

int main(void)
{
	char n;

	for (n = '0' ; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}

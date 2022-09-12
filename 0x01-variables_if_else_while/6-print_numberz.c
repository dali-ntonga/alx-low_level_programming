#include <stdio.h>
/**
 * main - prints numbers '1-10' without var char
 * Return: always(success)
 **/

int main(void)
{
	int n;

	for (n = '0'; n <=  '9' ; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}

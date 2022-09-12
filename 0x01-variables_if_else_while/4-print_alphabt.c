#include <stdio.h>

/**
 * main - ommit 'e' and 'q'
 * Return: always(success)
 **/

int main(void)
{
	char (c);

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
	}
	putchar ('\n');
	return (0);
}

#include "main.h"

/**
 * _memset -> Fills the first n bytes of the memory
 * @s: A pointer to the address to be filled
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled
 * Return: A pointer @s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

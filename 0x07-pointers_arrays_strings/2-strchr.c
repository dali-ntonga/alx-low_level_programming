#include "main.h"

/**
 * *_strchr -> searches for a character
 * @s: String to be searched
 * @c: Character searched for
 * Return: 0
 **/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}

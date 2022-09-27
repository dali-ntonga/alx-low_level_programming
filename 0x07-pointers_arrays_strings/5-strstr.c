#include "main.h"

/**
 * _strstr -> locates first occurence of substring "needle"
 * @haystack: input string
 * @needle: search for string
 * Return: 0
 **/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (0);
}


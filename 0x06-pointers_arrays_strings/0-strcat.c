#include "main.h"

/**
 * *_strcat -concatenates two strings
 * @dest: string to be ammended
 * @src: string to be copied
 * Return: Dest
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_str = 0;

	while (dest[i++])
		dest_str++;
	for (i = 0; src[i]; i++)
		dest[dest_str++] = src[i];
	return (dest);
}

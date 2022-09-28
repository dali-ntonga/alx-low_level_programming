#include "main.h"

/**
 * set_string -> Sets the value of a pointer to a char.
 * @s: Pointer
 * @to: Char value of pointer
 * Return: Void
 **/

void set_string(char **s, char *to)
{
	*s = to;
}

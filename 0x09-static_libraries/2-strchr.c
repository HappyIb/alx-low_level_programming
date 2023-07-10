#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds the first occurrence of a character in a string
 * @i: input
 * @j: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *i, char j)
{
	int a = 0;

	for (; i[a] >= '\0'; a++)
	{
		if (i[a] == j)
			return (&i[a]);
	}
	return (0);
}

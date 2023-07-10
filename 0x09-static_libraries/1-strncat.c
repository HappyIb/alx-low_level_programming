#include "main.h"

/**
 * _strncat - Appends a copy of the source string to the destination string.
 * using at most a bytes from src
 * @dest: input value
 * @src: input value
 * @a: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int a)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < a && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

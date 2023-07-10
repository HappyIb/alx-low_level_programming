#include "main.h"

/**
 *_memcpy - a function that copies from src to dest memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@q: number of bytes
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int q)
{
	int r = 0;
	int i = q;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		q--;
	}
	return (dest);
}

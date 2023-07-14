#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @q: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int q)
{
	void *ptr;

	ptr = malloc(q);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

#include "main.h"

/*
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int u;
	char *c;

	u = 1;
	c = (char *)&u;

	return ((int)*c);
}

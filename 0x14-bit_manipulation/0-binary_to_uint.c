#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary numbers to an unsingned integer.
 * @b: binary string.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con_val = 0;
	int i;

	/*check if binary string is NULL */
	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		con_val <<= 1;
		con_val += b[i] - '0';
		i++;
	}
	return (con_val);
}

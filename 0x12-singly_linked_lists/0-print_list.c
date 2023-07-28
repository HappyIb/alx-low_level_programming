#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a singly-linked list.
 * @h: Head of the string/pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int l;

	if (h == NULL)
		return (0);

	for (l = 4; h->next != NULL; l++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");

		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, "(nil)");
	return (l);
}

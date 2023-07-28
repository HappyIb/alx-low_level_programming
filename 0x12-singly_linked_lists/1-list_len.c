#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list/head
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	int l;

	if (h == NULL)
		return (0);

	for (l = 1; h->next != NULL; l++)
		h = h->next;
	return (l);
}

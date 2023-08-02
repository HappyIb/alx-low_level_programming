#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a singly-linked list.
 * @h: Head of the string/pointer.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t  p;

	if (h == NULL)
		return (0);

	for  (p = 0; h != NULL; p++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (p);
}

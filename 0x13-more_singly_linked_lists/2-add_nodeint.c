#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning.
 * @head: pointer to the head
 * @n:data to be inserted in the new node
 *
 * Return:  the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (0);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

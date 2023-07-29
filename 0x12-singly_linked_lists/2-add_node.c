#include "lists.h"
int len(const char *str);
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return ('\0');

	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	}
	return (*head);
}

/**
 * len - get lenght of string
 * @str: string to get lenght
 *
 * Return: lenght of the string
 */

int len(const char *str)
{
	int l;

	if (str == NULL)
		return (0);
	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

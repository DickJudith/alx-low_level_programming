#include "lists.h"

/**
 * add_node - function that adds node at the beginning of a list
 * @head: start of list node
 * @str: string
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t cap;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (cap = 0; str[cap]; cap++)
		;

	new->len = cap;
	new->next = *head;
	*head = new;

	return (*head);
}

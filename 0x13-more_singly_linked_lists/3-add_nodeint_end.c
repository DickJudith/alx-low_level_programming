#include "lists.h"

/**
 * add_nodeint_end - program that adds new node at end
 * @head: pointer to first node
 * @n: integer
 * Return:  address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (!(*head))
		{
			(*head) = new;
			return (new);
		}
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		return (new);
}

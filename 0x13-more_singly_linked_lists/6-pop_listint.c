#include "lists.h"

/**
 * pop_listint - function that delecmtes the head of list
 * @head:pointer
 * Return: head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *h;
	int hen;

	if (*head == NULL)
		return (0);

	temp = *head;

	hen = temp->n;

	h = temp->next;

	free(temp);

	*head = h;

	return (hen);
}

#include "lists.h"

/**
 * free_listint - function that frees a listint
 * @head: pointer to list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

#include "lists.h"

/**
 * delete_nodeint_at_index - function that delects node at index
 * @head: pointer
 * @index: node position
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next;
	listint_t *before;

	before = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && before != NULL; i++)
		{
			before = before->next;
		}
	}

	if (before == NULL || (before->next == NULL && index != 0))
		{
			return (-1);
		}

		next = before->next;

		if (index != 0)
		{
			before->next = next->next;
			free(next);
		}
		else
		{
			free(before);
			*head = next;
		}

		return (1);
}

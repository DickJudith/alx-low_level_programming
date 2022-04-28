#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node
 * @head: pointer
 * @index: node
 * Return: Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}

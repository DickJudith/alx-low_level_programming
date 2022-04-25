#include "lists.h"

/**
 * print_listint - function that prints all cdata
 * @h: element
 * Return: nmber of nodes
 */

size_t print_listint(const listint_t *h)
{
	struct node *ptr = NULL;

	ptr = head;

	while (ptr != Null)
		printf("%d\n", ptr->data);
	ptr = ptr->link;

	return (0);
}

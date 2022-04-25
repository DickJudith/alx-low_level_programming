#include "lists.h"

/**
 * listint_len - program that returns the number of elements in a linked list
 * @h: elements
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
	while (h)
	{
		printf("%d

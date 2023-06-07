#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%i\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function which prints all the elements of a linked list
 * @h: pointer to the list
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}

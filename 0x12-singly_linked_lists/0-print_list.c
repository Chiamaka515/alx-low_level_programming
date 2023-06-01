#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function which prints all the elements of a singly linked list
 * @h: pointer to the singly linked list
 *
 * if str is NULL print [0] (nil).
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		p++;
	}
	return (p);
}

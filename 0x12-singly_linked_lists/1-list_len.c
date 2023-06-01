#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the singly linked list
 *
 * Return: number of elements
 */


size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h != NULL)
	{
		h = h->next;
		e++;
	}
	return (e);
}

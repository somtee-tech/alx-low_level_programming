#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int j;

	for (j = 0; h; j++)
		h = h->next;
	return (j);

}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint list
 * @h: the linked list to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("\n%d", h->n);
		printf("\n");
		h = h->next;
		nodes++;
	}
	return (nodes);
}

#include "lists.h"

/**
 * print_listint - prints all elements of a string
 * @h: list of nodes
 * Return: Elements of a string
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

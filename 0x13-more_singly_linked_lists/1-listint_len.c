#include "lists.h"
/**
 * listint_len - return number of elem in a linked list
 * @h: head
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

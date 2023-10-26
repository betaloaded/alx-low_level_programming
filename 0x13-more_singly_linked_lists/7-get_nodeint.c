#include "lists.h"
/**
  * get_nodeint_at_index - function to return nth node
  * @head: node
  * @index: number
  * Return: return null !node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	if (head)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}

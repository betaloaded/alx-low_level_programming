#include "lists.h"
/**
  * free_listint2 - function to free list
  * @head: head
  * Return: 0
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *tempi;

	if (*head == NULL)
	{
		return;
	}
	while (*head)
	{
		tempi = *head;
		*head = (*head)->next;
		free(*head);
		*head = tempi;
	}
	*head = NULL;
}

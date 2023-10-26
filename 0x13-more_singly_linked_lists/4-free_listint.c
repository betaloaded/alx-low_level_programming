#include "lists.h"
/**
  * free_listint - function to free list
  * @head: head
  * Return: 0
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

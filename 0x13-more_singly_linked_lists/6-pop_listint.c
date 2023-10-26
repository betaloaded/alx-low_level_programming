#include "lists.h"
/**
  * pop_listint - function to delete head node
  * @head: head node
  * Return: head mode data n
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!*head)
	{
		return (0);
	}
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);

}

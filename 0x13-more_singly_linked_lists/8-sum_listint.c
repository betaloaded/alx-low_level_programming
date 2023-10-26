#include "lists.h"
/**
  * sum_listint - function to return sum of data
  * @head: node
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

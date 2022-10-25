#include "lists.h"

/**
 * sum_listint - sum of all dat in lists
 * @head: head of a list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int i, j = 0;

	while (head != NULL)
	{
		i = head->n;
		j = j + i;
		head = head->next;
	}
	return (j);
}
